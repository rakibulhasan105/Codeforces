// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);
long long int mod = 998244353;


 void phobia(int t)
 {
    string s;
		cin >> s; 
		int n = s.size();
		long long int ans = 1;
		int ansLen = 1;
		int cur = 1; 

		for (int i = 1; i < n; i++) { 
			if (s[i] != s[i - 1]) {
				ansLen++;
				ans = (ans * cur) % mod;
				cur = 1;
			} else {
				cur++;
			}
		}
		ans = (ans * cur) % mod;

		for (int i = 1; i <= n - ansLen; i++) {
			ans = (ans * i) % mod;
		}

		cout << n - ansLen << " " << ans << endl;
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

    return 0; // Hey, it's like a phobia..
}