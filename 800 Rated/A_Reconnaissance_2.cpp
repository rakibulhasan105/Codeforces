/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  \
    cin.tie(0); \
    ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &val : vec) cin >> val;
    int mindiff = INT_MAX;
    int temp1, temp2;
    for (int i = 1; i < n; i++)
    {
        int diff = abs(vec[i - 1] - vec[i]);
        if (diff < mindiff)
        {
            mindiff = diff;
            temp1 = i;
            temp2 = i + 1;
        }
    }

    int diff = abs(vec[0] - vec[n - 1]);
    if (diff < mindiff)
    {
        mindiff = diff;
        temp1 = 1;
        temp2 = n;
    }

    cout << temp1 << " " << temp2;

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

    return 0; //                Hey, it's like a phobia..
}