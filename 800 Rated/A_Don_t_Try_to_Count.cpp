#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool check(string s, string x)
{
    if(x.size() < s.size())
    {
        return false;
    }
    for(int i = 0; i < x.size() - s.size() + 1; i++)
    {
        if(x.substr(i,s.size()) == s)
        {
            return true;
        }
    }
    return false;

}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
       long long  int n,m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;

        string x0= x;
        string x1 = x0 + x0;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4;

        long long count = -1;
        if(check(s,x0))
        count = 0;
        else if(check(s,x1))
        count = 1;
        else if(check(s,x2))
        count = 2;
        else if(check(s,x3))
        count = 3;
        else if(check(s,x4))
        count = 4;
        else if(check(s,x5))
        count = 5;

        cout << count << endl;
    }
    return 0;
}