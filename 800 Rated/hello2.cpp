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
    string str2 = "hello";
    int count = 0;
    for(int i = 0; i<str.size(); i++)
    {
        if(str[i]=='h' && count==0)
        count++;
        else if(str[i]=='e' && count==1)
        count++;
        else if(str[i]=='l' && count==2)
        count++;
        else if(str[i]=='l' && count==3)
        count++;
        else if(str[i]=='o' && count==4)
        count++;
    }
    if(count == 5)
    cout << "YES" << endl;
    else cout << "NO" << endl;


}

int32_t main()
{
 phobia();
    

return 0;
}             // Hey, it's like a phobia..