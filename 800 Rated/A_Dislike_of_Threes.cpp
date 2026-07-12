#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        int num = 0;

        while (count < n)
        {
            num++;
            if (num % 3 == 0 || num % 10 == 3)
            {
                continue;
            }
            else
            {
                count++;
            }
           
        }
         cout << num << endl;
    }
}