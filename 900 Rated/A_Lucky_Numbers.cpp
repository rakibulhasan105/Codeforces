// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio  \
    cin.tie(0); \
    ios_base ::sync_with_stdio(0);

void pre()
{
    fastio;
}

const long long arr[] = {10, 100, 1000, 10000, 100000, 1000000, 10000000};

void phobia(int t)
{
    long long a, b;
    cin >> a >> b;
    bool flag = false;
    long long temp = -1;

    for (int i = 0; i < 7; i++)
    {
        if (b == arr[i])
        {
            cout << arr[i] - 10 << endl;
            return;
        }
    }

    for (long long int i = b; i >= a; i--)
    {
        if (i % 10 == 0)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        if (a % 10 == 0)
        {
            cout <<a+9 << endl;
            return;
        }
        else
        {
            for (long long int i = a; i <= b; i++)
            {
                if (i % 10 == 0)
                {
                    cout << i - 1 << endl;
                    return;
                }
            }
        }

        cout << b << endl;

    }
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

        return 0; // Hey, it's like a phobia..
    }
