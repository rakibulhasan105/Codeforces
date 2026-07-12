#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        vector<int> vec(num);
        for(int &val : vec) cin >> val;
        
        if(vec[0]==1) cout <<"YES" << endl;
        else cout <<"NO" << endl;
    }
    return 0;
}