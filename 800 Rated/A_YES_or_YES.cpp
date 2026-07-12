#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string str;
        cin >> str;
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        if (str == "YES")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}