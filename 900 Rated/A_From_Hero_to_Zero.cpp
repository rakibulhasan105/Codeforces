// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(NULL);  ios_base ::sync_with_stdio(false);


void phobia(int t)
{
    long long n,k;
    cin >> n >> k;
    long long count = 0;
    while(n>0)
    {
        if(n%k==0)
        {
            count++;
            n/=k;
        }
        else {
            count+=(n%k);
            n-=(n%k);
        }
    }

    cout << count << endl;
   
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