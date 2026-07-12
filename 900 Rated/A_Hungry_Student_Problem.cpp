//   আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 
//সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio    cin.tie(0);   ios_base ::sync_with_stdio(0);
 
void phobia(int t)
{
    int n;
    cin >> n;
    bool flag = false;
    for(int i = 0; i*3<=n; i++)
    {
        int temp = i*3;
        if((n-temp)%7==0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    for(int i = 0; i*7<=n; i++)
    {
        int temp = i*7;
        if((n-temp)%3==0)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;

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
 
    return 0; //         Hey, it's like a phobia..
}