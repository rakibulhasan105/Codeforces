// আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..

//সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio    cin.tie(NULL);   ios_base ::sync_with_stdio(false);

void phobia(int t)
{
    long long n , k;
    cin >> n >> k;
    vector<long long> vec;

    for(long long i = 1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            vec.push_back(i);
            if(n/i != i) vec.push_back(n/i);
        }
    }

    sort(vec.begin(),vec.end());
    k-=1;

    if(k>=vec.size())
    {
        cout << "-1" << endl;
    }
    else cout << vec[k] << endl;

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

    return 0; //         Hey, it's like a phobia..
}