// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio cin.tie(0); ios_base :: sync_with_stdio(0);

void pre()
{
    fastio;
}

void phobia(int t)
{
     long long  a,b;
     long long ans = -1;
     cin >> a >> b;

    long long  m = 0, n = 0;
    if(b%2==0)
    {
        m = b/2;
        n = 2;
    }


        long long  val = a*b +1;
        if (val%2 == 0){
            ans = max(ans, val);
        }

      if(m>0 && n>0){
        val = a*m +b/m;
        if (val%2 == 0){
            ans = max(ans, val);
        }

        val = a*n +b/n;
        if (val%2 == 0){
            ans = max(ans, val);
        }
    }



        cout << ans << endl;


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

    return 0;          // Hey, it's like a phobia..
    
}