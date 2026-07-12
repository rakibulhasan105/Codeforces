// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(0);  ios_base ::sync_with_stdio(0);

void pre() 
{
    fastio;
}

void phobia(int t)
{
    long long n,k;
    cin >> n >> k;

    vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

       
        set<int> s(vec.begin(), vec.end());

     int count1 = 0;
        for (int i = 0; i < k; i++) {
            if (s.find(i) == s.end()) count1++;
        }

    
    int count = 0;
    for(int i = 0; i< n;i++)
    {
        
        if(vec[i] == k) count++;
    }

    cout << max(count,count1) << endl;
    
}

int32_t main()
{
    pre();

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

 return 0;            // Hey, it's like a phobia..
}