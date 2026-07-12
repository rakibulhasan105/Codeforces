#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        int digit = x[0] - '0';
        int len = x.length();
        int result = (digit - 1) * 10 + (len * (len + 1)) / 2;
        cout << result << endl;
    }
 return 0;
}
