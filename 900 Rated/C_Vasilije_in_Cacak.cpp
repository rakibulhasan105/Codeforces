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
    long long n, k, x;
    cin >> n >> k >> x;
    long long sum1 = (k * (k + 1) / 2);
    long long sum2 = ((n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2);
    // long long count = k;
    // for(int i = n; ; i--)
    // {
    //     if(count <= 0) break;
    //     sum2+=i;
    //     count--;
    // }

    if (sum1 <= x && x <= sum2)  cout << "YES" << endl;
    else cout << "NO" << endl;

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
