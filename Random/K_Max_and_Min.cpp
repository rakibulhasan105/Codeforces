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
    ll a, b ,c;
    cin >> a >> b  >> c;
    if(a > b && a > c)
    {
        if(b<c) cout << b << " ";
        else cout << c << " ";
        cout << a;
    }
    else if(b > a && b > c)
    {
        if(a<c) cout << a << " ";
        else cout << c << " ";
        cout << b;
    }
    else
    {   if(c < a && c < b)
        {
            cout << c << " ";
            cout << a;
        }
        else 
        {if(a<b) cout << a << " ";
        else cout << b << " ";
        cout << c;}
    }

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