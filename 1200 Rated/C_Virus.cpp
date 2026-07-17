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
    long long n,m;
    cin >> n >> m;

    vector<long long > vec(m);

    for(auto & val : vec) cin >> val;

    sort(vec.begin(), vec.end());

    vector<long long >gap;

    for(int i = 0; i<m-1; i++)
    {
        gap.push_back(vec[i+1]-vec[i]-1);
    } 
    gap.push_back(vec[0]+n-vec[m-1]-1);

    sort(gap.rbegin(), gap.rend());

    int save = 0;
    int day = 0;

    for(auto gaps : gap)
    {
        int crGap = gaps - day*2;

        if(crGap>0)
        {
            save++;
            crGap-=2;
            if(crGap > 0)
             {save+=crGap;}

            day+=2;
        }
    }

    cout << (n-save) << endl;
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


