// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(NULL);  ios_base ::sync_with_stdio(false);

void phobia(int t)
{
    string str;
    cin >> str;
    bool flag = true;
    for(int i =0;i<str.size();)
    {
        if(str[i]=='1' && str[i+1]=='4' && str[i+2]=='4')
        i+=3;
        else if(str[i]=='1' && str[i+1]=='4')
        i+=2;
        else if(str[i]=='1')
        i++;
        else
        {
            flag = false;
            break;
        }     
    }

    if(flag) cout  << "YES" << endl;
    else cout << "NO" << endl;

    return;
}

int32_t main()
{
   
    fastio;

    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

    
 return 0;            // Hey, it's like a phobia..
}
