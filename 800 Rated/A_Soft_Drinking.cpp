#include <iostream>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;
    int a = (k*l)/nl;
    int b = c*d;
    int e = p/np;
    int x =min(a,b);
        x = min(x,e);
    cout << x/n;

    return 0;
}