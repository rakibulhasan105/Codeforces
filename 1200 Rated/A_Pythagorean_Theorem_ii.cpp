// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(NULL);   ios_base ::sync_with_stdio(false);

void pre()
{
    fastio;
}

void phobia(int t)
{
    long long n;
    cin >> n;
    int count = 0;
    for(int i = 1; i*i<=n ;i++)
    {
        if(sqrt(1+pow(i,2))<=n) count++;
        else{
            break;
        }
    }

    cout << count << endl;
}

int32_t main()
{
    pre();

    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

    return 0; // Hey, it's like a phobia..
}
