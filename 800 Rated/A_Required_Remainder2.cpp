#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t; 

    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;
        long long k = n - (n - y) % x;
        cout << k << endl;
    }

    return 0;
}
