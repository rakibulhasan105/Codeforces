#include <iostream>
using  namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long sum=0;
        for(int i=1;i<=n;i++)
        {
            int s;
            cin >> s;
            sum+=s;
        }
        if(sum<n) cout << 1 << endl;
        else if(sum==n) cout << 0 << endl;
        else cout << sum-n  << endl;
    }
}