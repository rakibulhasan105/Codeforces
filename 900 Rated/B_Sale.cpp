/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    int  n,m;
    cin >> n >> m;
    long long sum = 0;
    vector<int > vec(n);
    for(auto &val : vec) cin >> val;
    sort(vec.begin(),vec.end());
    for(int i = 0; i<m; i++)
    {
        if(vec[i]>0) break;
        sum+=(-1*vec[i]);
    }

    cout << sum << endl;

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