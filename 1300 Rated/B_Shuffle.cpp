/***আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
****সাদায় কিন্তু অদ্ভুত তুমি..
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio    cin.tie(0);   ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    int n,x,m;
    cin >> n >> x >> m;
   
    int r1 = x , r2 = x;

    for(int i = 0;i<m;i++)
    {
        int l,r;
        cin >> l >> r;
        if(r2 >= l && r1 <= r)
        {
            r1 = min(r1,l);
            r2 = max(r2,r);
        }
    }

    cout << r2-r1+1 << endl;
   

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

  return 0; //          Hey, it's like a phobia..
}