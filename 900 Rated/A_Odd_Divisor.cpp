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
    long long n;
    cin >> n;

    if ((n & (n - 1)) == 0)
            {cout << "NO" << endl;}
        else
           { cout << "YES" << endl;}

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

    return 0; // Hey, it's like a phobia..
}
