#include <iostream>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long num;
        cin >> num;
        long long a = num / 3;
        long long b = num / 3;
        if (num % 3 == 1)
            a++;
        else if (num % 3 == 2)
            b++;
        cout << a << " " << b << endl;
    }
}