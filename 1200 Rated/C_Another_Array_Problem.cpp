// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  \
    cin.tie(0); \
    ios_base ::sync_with_stdio(0);

void pre()
{
    fastio;
}

void phobia(int t)
{
    long long n;
    cin >> n;

    deque<long long> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    long long ans = vec[0];
    vec.pop_front();

    while (vec.size() != 0)
    {
        int maxValue = INT_MIN;
        int maxIndex = INT_MIN;

        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i] > maxValue)
            {
                maxValue = vec[i];
                maxIndex = i;
            }

            for (int i = 0; i <= maxIndex; i++)
            {
                ans += maxValue - 1;
                vec.pop_front();
            }

            /* code */
        }
    }

    cout << ans << endl;
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
