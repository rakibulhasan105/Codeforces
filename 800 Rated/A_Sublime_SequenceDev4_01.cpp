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
    if(k%2==0) cout << 0  << endl;
    else cout << n << endl;
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