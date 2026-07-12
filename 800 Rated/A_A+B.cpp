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
        string str;
        cin >> str;
        int a = str[0] - '0';
        int b = str[2] - '0';
        cout << (a + b) << endl;
    }
    return 0;
}