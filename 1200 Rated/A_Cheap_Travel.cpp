/***আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
****সাদায় কিন্তু অদ্ভুত তুমি..
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio    cin.tie(0);   ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int count = 0;
    while (n>0)
    {
        if(n<m)
        {
            if(n*a<b)
            {
                count+=(n*a);
                break;
            }
            else 
            {
                count+=b;
                break;
            }
        }

        if(a*m>b)
        {
            count+=b;
            n-=m;
        }
        else 
        {
            count+=a;
            n--;
        }
    }

    cout << count << endl;

   return;
}

int32_t main()
{
    fastio;
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

  return 0; //          Hey, it's like a phobia..
}