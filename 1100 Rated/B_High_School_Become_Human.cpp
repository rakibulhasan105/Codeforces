#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m;
    cin >> n >> m;
    double sum1 = m * log(n);
    double sum2 = n * log(m);
    if(sum1>sum2) cout <<">" << endl;
    else if(sum2>sum1) cout <<"<" << endl;
    else cout << "=" << endl;
 
}