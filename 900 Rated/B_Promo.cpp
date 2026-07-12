// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(NULL);  ios_base ::sync_with_stdio(false);

void pre()
{
    fastio;
}

void preCompute(int n, vector<long long >& arrP,vector<long long > &arrV)
{
    for (int i = 0; i < n; ++i)
    {
        arrP[i + 1] = arrP[i] + arrV[i];
    }
}

void phobia(int t)
{
   int n, q;
   cin >> n >> q;
   vector <long long> vec(n);
   for(auto & val : vec) cin >> val;

   sort(vec.rbegin(), vec.rend());

   vector <long long> prefix_sum(n+1,0);
   preCompute(n,prefix_sum,vec);

   for(int i = 1;i<=q;i++)
   {
        int x,y;
        cin >> x >> y;
        cout << prefix_sum[x] - prefix_sum[x - y] << endl; 
   }

  

    return;
}

int32_t main()
{
    pre();

    int tc = 1;
   // cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

    
 return 0;            // Hey, it's like a phobia..
}
