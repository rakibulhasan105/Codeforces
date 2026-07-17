// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio cin.tie(0); ios_base :: sync_with_stdio(0);

void pre()
{
    fastio;
}


void phobia(int t)
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(auto &x : v)
        cin >> x;
    long long sumOdd = 0, odd = 0, sumEven = 0, even = 0;
    for(int i = 0; i < n; i+=2)
    {
        even++;
        sumEven += v[i];
    }
    for(int i = 1 ; i < n; i+=2)
    {
        odd++;
        sumOdd += v[i];
    }

    long long sum = sumEven+sumOdd;
    if(sum%n!=0)
    {
        cout << "NO" << endl;
        return;
    }
    long long avg = sum/n;
    
if(sumEven%even==0 && even*avg==sumEven && sumOdd%odd==0 && odd*avg==sumOdd)
{
         cout<<"YES"<<endl;
}
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

    return 0;          // Hey, it's like a phobia..
    
}