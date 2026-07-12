#include <bits/stdc++.h>
using  namespace std;
#define fastio ios_base:: sync_with_stdio(false); cin.tie (NULL);

void pre()   // rafion sir
{
    fastio;
}

void phobia()
{
    int n;
    cin >> n;
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        if(temp%2!=0) count++;
    }

    (count%2!=0? cout <<"NO"  : cout << "YES");
    cout << "\n";

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