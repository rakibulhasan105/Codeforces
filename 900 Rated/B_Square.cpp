/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1>y1) swap(x1,y1);
    if(x2>y2) swap(x2,y2);

    if(y1==y2 && x1+x2==y1) cout << "YES" << endl;
    else cout << "NO" << endl;

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

    return 0; //                Hey, it's like a phobia..
}