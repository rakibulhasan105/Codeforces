/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    long long n;
    cin >> n;
    if(n==0)
    {
        cout << 0 << endl;
        return;
    }
    n = abs(n);
    long long temp = 0;
    int i = 1;
    while (true)
    {
        temp+=i;
        if(temp>=n && (temp-n)%2==0) break;

     i++; 
    }
    
    cout << i <<  endl;

   return;
}

int32_t main()
{
    fastio;
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

    return 0; //                Hey, it's like a phobia..
}