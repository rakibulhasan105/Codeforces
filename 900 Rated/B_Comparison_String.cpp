// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(0);  ios_base ::sync_with_stdio(0);

void pre()    
{
    fastio;
}

void phobia(int t)
{
   int n;
   cin >> n;
   string str;
   cin >> str;
   
   int maxLength = 1;
   int currentLength = 1;

    for (int i = 1; i < str.length(); i++) {
        if (str[i] == str[i - 1]) {
            currentLength++;
        } else {
            currentLength = 1;  
        }
        maxLength = max(maxLength, currentLength);
    }

    cout << maxLength+1 << endl;

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

 return 0;            // Hey, it's like a phobia..
}
