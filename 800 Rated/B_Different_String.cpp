// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(0);  ios_base ::sync_with_stdio(0);

void phobia(int t)
{
    string str;
    cin >> str;
    if(str.size()==1)
    {
        cout << "NO" << endl;
        return;
    }

   bool flag = false;

   for(int i = 1;i<str.size();i++)
   {
        if(str[i]!=str[i-1])
        {
            flag = true;
            break;
        }
   }

   if(flag)
   {
    cout << "YES" << endl;
    string str2 = str;
    sort(str.rbegin(), str.rend());
    if(str2==str)
    {
    sort(str.begin(), str.end());
    cout << str << endl;
    return;

    }
    else cout << str << endl;
    return;

   }
   cout << "NO" << endl;



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

 return 0;            // Hey, it's like a phobia..
}
