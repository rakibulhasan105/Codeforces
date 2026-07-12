#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int m = min(a, b);
    int n = max(a, b);
    if (m == 1 && n == 2)
        cout << 3 << endl;
    else if (m == 1 && n == 3)
        cout << 2 << endl;
    else
        cout << 1 << endl;
}
