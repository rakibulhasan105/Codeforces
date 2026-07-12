#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio       ios_base ::sync_with_stdio(false); cin.tie(NULL);

void pre() // rafio sir
{
    fastio;
}

void phobia()
{
    int n;
    cin >> n;
    int tmep = sqrt(n);
    if(tmep*tmep == n) cout << 0 << " " << tmep<< endl;
     else cout << -1 << endl;
   // cout << 1;
   return;

}

int main()
{
    pre();


    int tc;
    cin >> tc;
    while (tc--)
    {
        phobia();
    }

    return 0;     // Hey, it's like a phobia..
}