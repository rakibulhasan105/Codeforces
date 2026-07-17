// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(0);  ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    int n;
    cin >> n;
    long long sum1 = 0;
    long long sum2 = 0;
    long long sum3 = 0;
    while(n--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }

    if(!sum1 && !sum2 && !sum3) cout << "YES" << endl;
    else cout << "NO" << endl;

 return; 
}

int32_t main()
{
    fastio;
    int tc = 1;
   // cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

 return 0;            // Hey, it's like a phobia..
}