#include <iostream>
//#include <cstdlib>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        int absValue = abs(a - b);
        int count = 0;
        for (int i = 1; absValue > 0; i++)
        {
            if (absValue > 10)
            {
                count++;
                absValue -= 10;
            }
            else
            {
                count++;
                absValue = 0;
            }
        }
        cout << count << endl;
    }
    return 0;
}