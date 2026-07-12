#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 1; i<=n;i++)
    {
        int temp ;  cin >> temp;
        if(i%2==0)
        {
            temp = -temp;
        }
        sum+=temp;

    }
    cout << sum << endl;
}

int main(){
    ios_base :: sync_with_stdio(false);  cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;   
}