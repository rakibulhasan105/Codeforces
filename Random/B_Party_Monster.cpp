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
    int n;cin >> n;
    string str;
    cin >> str;
    int count1 = 0, count2 = 0;
    for(int i = 0; i<str.size();i++)
    {
        if(str[i]=='(') count1++;
        else count2++;
    }
    if(count1==count2) cout << "YES" << endl;
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
        phobia();
    }

    return 0; //         Hey, it's like a phobia..
}