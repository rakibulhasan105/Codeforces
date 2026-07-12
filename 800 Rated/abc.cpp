#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    int temp1 = max(a, b);
    int temp = min(a, b);
    if(temp1%temp==0 || temp == 1)
    {
        cout << 1 << endl;
        return;
    }
    // if (temp1 / temp == 2)
    // {
    //     cout << 1 << endl;
    //     return;
    // }
    cout << 2 << endl;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {


    solve();

    }
 return 0;  // Hey, it's like a phobia..
} 