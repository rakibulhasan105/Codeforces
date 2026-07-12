#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
                sum1 += str[i];
            else
                sum2 += str[i];
        }
        if (sum1 == sum2)
            cout << "YES"<< endl;
        else
            cout << "NO"<< endl;
    }
    return 0;
}