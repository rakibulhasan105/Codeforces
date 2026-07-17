// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio cin.tie(0); ios_base :: sync_with_stdio(0);

void phobia(int t)
{
    long long a, b;
    cin >> a  >> b;
    if(a>b) swap(a,b);
    if(a==1)
    {
        cout << b*b << endl;
    }
    else if((b/2)==a)
    {
        cout << 2*b <<  endl;
    }
    else if(a%2==0 && b%2==0)
    {
        for(int i = b; ; i+=a)
        {
            if((i+=a) % a ==0 && (i+=a )% b ==0)
            {
                cout << i+a << endl;
                return;
            }
        }
    }
    else if(a%2!=0 && b%2!=0)
    {
        for(int i = b; ; i+=a)
        {
            if((i+=a) % a ==0 && (i+=a)% b ==0)
            {
                cout << i+a << endl;
                return;
            }
        }
    }
    else  cout << a*b << endl;
    return;
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

    return 0;          // Hey, it's like a phobia..  
}