// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  \
    cin.tie(0); \
    ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    int n, m;
    cin >> n >> m;
    int count = 1;
    int temp = n;

    while (true)
    {
        if (count > m)  break;

        if (count == n)
        {
            m -= count;
            count = 1;
        }
        else
        {
            m -= count;
            count++;
        }
    }
    cout << m << endl;

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



#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long sum = n * (n + 1) / 2;

    // Remove full cycles
    if (m >= sum) {
        m %= sum;
    }

    // Now simulate one cycle until chips are insufficient
    for (long long i = 1; i <= n; i++) {
        if (m < i) {
            cout << m << endl;
            return 0;
        }
        m -= i;
    }

    cout << m << endl;
    return 0;
}
