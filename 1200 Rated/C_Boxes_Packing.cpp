//   আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..

//সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio    cin.tie(0);   ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto & val : vec) cin >> val;
    sort(vec.begin(),vec.end());
   int curr = 1;
   int max_length = 1;
   for(int i = 1;i<vec.size();i++)
   {
        if(vec[i]==vec[i-1])
        {
            curr++;
        }
        else{
            curr = 1;
        }
        max_length = max(curr,max_length);
   }

   cout << max_length << endl;

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

    return 0; //         Hey, it's like a phobia..
}