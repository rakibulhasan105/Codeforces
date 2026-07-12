/***                                  সাদায় কিন্তু অদ্ভুত তুমি..                           ***/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(NULL);  ios_base ::sync_with_stdio(false);

void phobia(int t)
{
   int n;
   cin >> n;
   vector<int> vec(n);
   for(auto & val : vec) cin >> val;

   sort(vec.begin(),vec.end());

   for(int i = 1;i<vec.size();i++)
   {
        if(vec[i-1]!=vec[i])
        {
            cout << vec[i];
            return;
        }
   }

   cout << "NO" << endl;

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

    
 return 0;                     
//                                      Hey, it's like a phobia..
}