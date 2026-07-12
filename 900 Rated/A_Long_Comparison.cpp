/***                                  সাদায় কিন্তু অদ্ভুত তুমি..                           ***/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(NULL);  ios_base ::sync_with_stdio(false);

void phobia(int t)
{
    string str1;
    int str2;
    cin >> str1 >> str2;
    str1 += string(str2,'0');

    string str3;
    int  str4;
    cin >> str3 >> str4;

    str3 += string(str4,'0');

   if(str1.size()>str3.size()) cout << '>' << endl;
   else if(str1.size()<str3.size()) cout << '<' << endl;
   else
    {    
        if (str1 > str3) cout << ">" << endl;
        else if (str1 < str3) cout << "<" << endl;
        else cout << "=" << endl;
   }

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
//                                Hey, it's like a phobia..
}