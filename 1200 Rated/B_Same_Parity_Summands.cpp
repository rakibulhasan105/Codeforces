// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  \
    cin.tie(0); \
    ios_base ::sync_with_stdio(0);

void phobia(int t)
{
   int n, k; 
   cin >> n >> k;

   if(n==k)
   {
    cout << "YES" << endl;
    for(int i = 1;i<=n;i++)
    cout << 1 << " ";
    cout << endl;
    return;
   }
		if (n >= k && n % 2 == k % 2) {
            cout << "YES" << endl;
			for (int i = 0; i < k-1; i++) cout << 1 << " ";
			cout << n - k + 1 << endl;
		}
		else if (n >= k * 2 && n % 2 == 0) {
              cout << "YES" << endl;
			for (int i = 0; i < k-1; i++) cout << 2 << " ";
			cout << n - 2 * k + 2 << endl;
		}
		else cout << "NO" << endl;
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
