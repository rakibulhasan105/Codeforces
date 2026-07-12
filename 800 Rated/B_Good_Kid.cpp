#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int product = 1;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        vec[0] += 1;
        for (int i = 0; i < n; i++)
            product *= vec[i];
        cout << product << endl;
    }
}