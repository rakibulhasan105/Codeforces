// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  cin.tie(0); ios_base ::sync_with_stdio(0);




 /*int count_divisor(long long n)
 {
     int count = 0;

    for (int i = 1; i <=sqrt(n); i++) {
        if (n % i == 0) {
            
            if (i == n / i) count++;
            else count += 2; 
        }
    }

return count;

 }*/

 bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false; 
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
        return false;
    }
    return true;
}




void phobia(int t)
{
    long long n;
    cin >> n;
    vector<long long > vec(n);

    for(auto & val : vec) cin >> val;

    for(int i = 0;i<n;i++)
    {
      long long  int temp = sqrt(vec[i]);
       if(temp * temp == vec[i] && isPrime(temp)) cout << "YES" << endl;
       else cout << "NO" << endl;
    }

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

    return 0; // Hey, it's like a phobia..
}