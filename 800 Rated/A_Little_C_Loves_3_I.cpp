// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(0);  ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    int n;
    cin >> n;
    if(n%3==0) cout << 1 << " " << 1  << " " << n-2 << endl;
    else if(n%3==1) cout << 1 << " " << 1 << " " << n-2 << endl;  
    else if(n%3==2) cout << 2 << " " << 2 << " " << n-4 << endl;  


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
