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
    long long m,n,k;
    cin >> m >> n >> k;
    long long temp = ceil((double)m/k) * ceil((double)n/k);
    //cout << ceil((double)m/k) * ceil((double)n/k) << endl;
  cout << temp << endl; 
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