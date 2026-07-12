// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(0);  ios_base ::sync_with_stdio(0);

void pre() 
{
    fastio;
}

void phobia(int t)
{
    long long n;
    cin >> n;
    if(n%3==0) cout << 0 << endl;
    else cout << 3-(n%3) << endl;

return;    
}

int32_t main()
{
    pre();

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

 return 0;            // Hey, it's like a phobia..
}
