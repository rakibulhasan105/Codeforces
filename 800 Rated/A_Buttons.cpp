#include <bits/stdc++.h>
using  namespace std;
#define fastio ios_base:: sync_with_stdio(false); cin.tie (NULL);

void pre()   // rafion sir
{
    fastio;
}

void phobia()
{
    long long a,b,c;
    cin >> a >> b >> c;
    if(c%2==0)
    {
        if(a<=b) cout <<  "Second" << endl;
        else cout << "First" << endl;
    }
    else
    {
        if(a>=b) cout << "First" << endl;
        else cout <<  "Second" << endl;
    }
    return;
}


int32_t main()
{
    pre();

    int tc;
    cin >> tc;
    while(tc--)
    {
        phobia();
    }

return 0;
}             // Hey, it's like a phobia..