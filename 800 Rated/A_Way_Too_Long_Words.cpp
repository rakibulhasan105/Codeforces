#include <bits/stdc++.h>
using  namespace std;
#define fastio ios_base:: sync_with_stdio(false); cin.tie (NULL);

void pre()   // rafion sir
{
    fastio;
}

void phobia()
{
    string str;
    cin >> str;
    if(str.size()<=10) {
        cout << str << endl;
        return;
    }
    cout <<str[0] << str.size()-2 << str[str.size()-1] << endl;
}


int32_t main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        phobia();
    }

return 0;
}             // Hey, it's like a phobia..