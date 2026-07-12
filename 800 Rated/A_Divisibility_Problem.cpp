#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {

        long long int a, b;
        cin >> a >> b;
         long long int count = 0;
        if (a % b == 0)
            cout << count<< endl;
        else
        {
            for (int j = 1; a % b != 0; j++)
            {
                a = a + 1;
                count++;
                if (a % b == 0)
                {
                    cout << count<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}