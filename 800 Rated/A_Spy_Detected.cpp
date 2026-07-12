#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int position = 0;
        int common = vec[0];
        if (vec[0] == vec[1])
        {
            common = vec[0];
        }
        else if (vec[1] == vec[2])
        {
            position = 1;
        }
        else
        {
            position = 2;
        }
        if (position != 1 && position != 2)
        {
            for (int i = 0; i < n; ++i)
            {
                if (vec[i] != common)
                {
                    position = i + 1;
                    break;
                }
            }
        }
        cout << position << endl;
    }
}