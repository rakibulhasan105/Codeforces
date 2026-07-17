// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  \
    cin.tie(0); \
    ios_base ::sync_with_stdio(0);

void pre() // rafio sir
{
    fastio;
}

void phobia(int t)
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());

    if (a == b)
    {
        cout << "yes" << endl
             << "1 1" << endl;
        return;
    }

    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        l = i;
        if (a[i] != b[i])
            break;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        r = i;
        if (a[i] != b[i])
            break;
    }

    if (l > r)
    {
        cout << "yes" << endl
             << "1 1" << endl;
        return;
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    if (a == b)
    {
        cout << "yes" << endl
             << l + 1 << " " << r + 1 << endl;
        return;
    }
    else
        cout << "no" << endl;
}

int32_t main()
{
    pre();

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

    return 0; // Hey, it's like a phobia..
}
