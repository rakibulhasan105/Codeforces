#include <bits/stdc++.h>
using  namespace std;
#define fastio ios_base:: sync_with_stdio(false); cin.tie (NULL);

void pre()   // rafion sir
{
    fastio;
}

void phobia()
{
    long long n, k;
    cin >> n >> k;
    if(n%2==0) {
        cout << "YES" << endl;
        return;
    }
    if(k%2!=0) cout <<"YES" << endl;
    else cout << "NO" << endl;

    return;
}


int32_t main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        phobia();
    }

return 0;
}             // Hey, it's like a phobia..