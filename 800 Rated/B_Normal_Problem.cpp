/***                                  সাদায় কিন্তু অদ্ভুত তুমি..                           ***/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(NULL);  ios_base ::sync_with_stdio(false);

void phobia(int t)
{
    string str;
    cin >> str;
    reverse(str.begin(),str.end());
    for(int i = 0;i<str.length();i++)
    {
        if(str[i]=='p') str[i]='q';
        else if(str[i]=='q') str[i]='p';
    }
    
    cout << str << endl;

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

    
 return 0;                     
//                                      Hey, it's like a phobia..
}