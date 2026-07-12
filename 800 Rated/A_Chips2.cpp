// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  \
    cin.tie(0); \
    ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    long long n, m;
    cin >> n >> m;

    long long sum = n * (n + 1) / 2;

    if (m >= sum)
    {
        m %= sum;
    }

    for (long long i = 1; i <= n; i++)
    {
        if (m < i)
        {
            break;
        }
        m -= i;
    }

    cout << m << endl;
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

    return 0;       // Hey, it's like a phobia..
}   