/***                                সাদায় কিন্তু অদ্ভুত তুমি..                        ***/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio    cin.tie(0);   ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    int n;
   string str;
   cin >> n  >> str;
   reverse(str.begin(),str.end());
   int temp = stoi(str) + n;
   cout << temp << endl;

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

    return 0; //                         Hey, it's like a phobia..
}
