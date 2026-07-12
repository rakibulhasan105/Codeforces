#include <iostream>
using namespace std;
int findUnique(int a, int b, int c)
{
    if (a == b)
        return c;
    if (a == c)
        return b;
    return a; // if b == c
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << findUnique(a, b, c) << endl;
    }
    return 0;
}
