#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int count = 0;
    int k_th_place = vec[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (vec[i] >= k_th_place && vec[i] > 0)
        {
            count++;
        }
        if (vec[i] < k_th_place)
            break;
    }
    cout << count;
    return 0;
}