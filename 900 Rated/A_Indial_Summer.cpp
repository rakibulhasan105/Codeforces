// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(NULL);  ios_base ::sync_with_stdio(false);

void pre()
{
    fastio;
}


void phobia(int t)
{
    int n;
    cin >> n;
 
    
    vector <pair<string, string>> vec(n);
 
    for(int i = 0; i < n; i++)
    { 
        cin >> vec[i].first >> vec[i].second;
    }
    
    sort(vec.begin(), vec.end());
    int temp = unique(vec.begin(),vec.end())- vec.begin();
 
    cout <<temp << endl;
   
 return;
}

int32_t main()
{
    pre();

    int tc = 1;
   // cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

    
 return 0;            // Hey, it's like a phobia..
}
