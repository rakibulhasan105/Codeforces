/*  আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
 *  সাদায় কিন্তু অদ্ভুত তুমি..
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(0); ios_base ::sync_with_stdio(0);
#define ll long long

void phobia(int Shuhashini)
{
    ll n,k;
    cin >> n >> k;

    if(n%2!=0 && k%2==0 || k > n)
    {
        cout << "NO" << endl;
        return;
    }

    if(n%2==0 && n/2 >= k)
    {
        cout << "YES" << endl;
        for(int i = 1; i< k; i++){
            cout << "2 ";
            n-=2;
        }
        cout << n <<endl;
    }
    else{
        int m = k-1;
        int last = n-m*1;
        if(last%2==0)
        {
            cout << "NO" << endl;
            return;
        }

        cout << "YES" << endl;
        for(int i = 1; i < k; i++)
        {
                cout << "1 " ;
        }
        cout << last << endl;
    }

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

    return 0; //                Hey, it's like a phobia..
}
