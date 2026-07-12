#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int countEven = 0, countOdd = 0;
        for (int i = 0; i < 2 * n; ++i)
        {
            int num;
            cin >> num;
            if (num % 2 == 0)
                countEven++;
            else
                countOdd++;
        }
        if (countEven == n && countOdd == n)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}