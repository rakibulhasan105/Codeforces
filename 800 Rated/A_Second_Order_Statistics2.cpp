/***                                  সাদায় কিন্তু অদ্ভুত তুমি..                           ***/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(NULL);  ios_base ::sync_with_stdio(false);

void phobia(int t)
{
   int n;
   cin >> n;
   set<int> s;
   for(int i = 1;i<=n;i++)
   {
        int temp;
        cin >> temp;
        s.insert(temp);
   }
   if(s.size()<2) cout << "NO" << endl;
   else cout << *(++s.begin()) << endl;

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

 return 0; //                      Hey, it's like a phobia..
}