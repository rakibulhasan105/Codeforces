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
    ll n; cin >> n;
    int even = 0, odd = 0, positive = 0, negative = 0;
    for(int i = 1; i <= n; i++)
    {
        int temp ;
        cin >> temp;
        if(temp%2==0) even++;
        else odd++;

        if(temp==0) continue;
        else if(temp>0) positive++;
        else negative++;

    }

    cout<< "Even: " << even  << endl
        << "Odd: " << odd << endl
        << "Positive: " << positive << endl
        << "Negative: " << negative << endl;

    return;
}

int32_t main()
{
    fastio;
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        phobia();
    }

    return 0; //         Hey, it's like a phobia..
}