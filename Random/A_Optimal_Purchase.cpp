/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia()
{
    ll a, b, c;
    cin >> a >> b  >> c;
    ll temp1 = b*a;
    ll temp2 = ((a+2)/3)*c;
    ll res = min(temp1,temp2);
    ll temp3 = ((a/3)*c) + ((a%3)*b);
    res = min(res,temp3);
    cout << res << endl;

    return;
}

int32_t main()
{
    fastio;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        phobia();
    }

    return 0; //         Hey, it's like a phobia..
}