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
    long long n;
    cin >> n ;
    int one = 0;
    long long sum = 0;
    vector<int > vec(n);
    for(auto & val : vec)
    {
        cin >> val;
        if(val==1) one++;
        //else 
        sum+= val;
    }
   // int temp = sum-one;

    if(n==1) 
    {
        cout << "NO" << endl;
        return;
    }
    if(n==2 && vec[0]==1 && vec[1]==1) 
    {
         cout << "NO" << endl;
        return;

    }

    long long temp2 = (one*2)+(n-one);
    if(temp2<=sum) cout << "YES" << endl;
    else cout << "NO" << endl;




    return;
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
