/***                                  সাদায় কিন্তু অদ্ভুত তুমি..                           ***/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(NULL);  ios_base ::sync_with_stdio(false);

void phobia(int t)
{
    int n, b, d;
    cin >> n >> b >> d;
    vector<long long > vec;
    for(int i = 0;i<n;i++)
    {
        int x ;
        cin >> x;
        if(x<=b) vec.push_back(x);
    }
    int count = 0;
    long long  sum = 0;

    for(int i = 0;i<vec.size();i++)
    {
        sum+=vec[i];
        if(sum>d)
        {
            count++;
            sum=0;
        }
    }
    cout << count << endl;
    

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

    
 return 0;                     
//                                      Hey, it's like a phobia..
}