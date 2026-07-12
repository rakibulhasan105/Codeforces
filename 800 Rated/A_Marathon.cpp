#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> vec(4);
        cin >> vec[0];
        int count = 0;
        for (int i = 1; i < 4; i++)
        {
            cin >> vec[i];
            if (vec[0] < vec[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}