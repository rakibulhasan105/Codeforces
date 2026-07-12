//   আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..

// সাদায় কিন্তু অদ্ভুত তুমি..

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  \
    cin.tie(0); \
    ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    long long a, b, k;
    cin >> a >> b >> k;
    long long g = __gcd(a, b);

    if (a / g <= k && b / g <= k)
    {
        cout << 1 << endl;
    }
    else
        cout << 2 << endl;

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
