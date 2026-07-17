/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);

// at first i learn about this problem then i solve it..
void phobia(int t)
{
    int n,k,l,r,sll,sk;
    cin >> n >> k >> l >> r >> sll >> sk;

    vector<int > vec;

    int temp1 = sk / k;
    int ex1 = sk % k;

    for(int i = 0;i<k;i++)
    {
        if(i<ex1) vec.push_back(temp1+1);
        else vec.push_back(temp1);

    }
    int rest = sll-sk;
    if(n-k>0)
    {
        int temp2 = rest/(n-k);
        int ex2 = rest%(n-k);
        for(int i= 0;i<n-k;i++)
        {
            if(i<ex2) vec.push_back(temp2+1);
            else vec.push_back(temp2);
        }
    }

    for(auto val : vec) cout << val << " ";
    cout << endl;
    
 return ;
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