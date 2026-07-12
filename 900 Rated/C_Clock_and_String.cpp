// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(0);  ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a>b) 
    {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    }

    if(c>d)
    {
        c = c^d;
        d = c^d;
        c = c^d;
    }

    if((a < c && c < b && b < d) || (c < a && a < d && d < b)){ cout << "YES" << endl;
    }else cout << "NO" << endl;
return;    
}

int32_t main()
{
    fastio;

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

 return 0;            // Hey, it's like a phobia..
}
