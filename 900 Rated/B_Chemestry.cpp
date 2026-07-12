// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(NULL);  ios_base ::sync_with_stdio(false);


void phobia(int t)
{
    int n,k;
    cin >> n >> k;
    string str;
    cin >> str;
    long long odd = 0;

    vector<long long> vec(26,0);
    for(char  c : str) {
        vec[c - 'a']++;
    }

    for(int val : vec)
    {
        if(val%2!=0) odd++;
    }

     if (k >= odd-1) 
     {cout << "YES" <<endl;
    return;
}
        cout << "NO" << endl;

 
   
 return;
}

int32_t main()
{
       fastio;


    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

    
 return 0;            // Hey, it's like a phobia..
}
