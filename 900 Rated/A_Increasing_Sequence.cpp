/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    int  n,d;
    cin >> n >> d;
    vector<int > vec(n);
    for(auto &val : vec) cin >> val;

    int count = 0;
    for(int i = 1;i<n;i++)
    {
        if(vec[i-1]>=vec[i])
        {
            int temp = vec[i-1]-vec[i];
            count+=(temp/d);
            count++;
            if(temp==0) vec[i] = vec[i]+d;
            else vec[i]=vec[i]+ (d*(temp/d))+d;
            
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

    return 0; //                Hey, it's like a phobia..
}