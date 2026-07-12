#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    cin >> vec[0];
    int highest = vec[0];
    int lowest = vec[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> vec[i];
        if (vec[i] > highest)
        {
            highest = vec[i];
            count++;
        }
        else if (vec[i] < lowest)
        {
            lowest = vec[i];
            count++;
        }
    }
    cout << count << endl;

    return 0;
}