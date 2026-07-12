// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(NULL);  ios_base ::sync_with_stdio(false);

void phobia(int t)
{
    int n;
    cin >> n;
    int maximum = INT_MIN;
    for(int i = 1; i <= n; i++)
    {
        int x,y;
        cin >> x >> y;
        maximum = max(maximum,x+y);
    }

    cout << maximum << endl;

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

    
 return 0;            // Hey, it's like a phobia..
}