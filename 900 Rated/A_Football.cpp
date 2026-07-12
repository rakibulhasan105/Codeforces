// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio ios_base :: sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

void phobia() {
    string str;
    cin >> str;

    int maxLength = 1; 
    int currentLength = 1; 

    for (size_t i = 1; i < str.length(); i++) {
        if (str[i] == str[i - 1]) {
            currentLength++;
        } else {
           // maxLength = std::max(maxLength, currentLength);
            currentLength = 1;
        }
         maxLength = std::max(maxLength, currentLength);
    }

    //return std::max(maxLength, currentLength);
    //return maxLength;
    if(maxLength >= 7) cout << "YES" << endl;
    else cout << "NO" << endl;

    return;
}


int32_t main()
{
    fastio;
    int tc = 1;
   // cin >> tc;
    while(tc--)
    {    
        phobia();
    }

  return 0;    // Hey, it's like a phobia..
}