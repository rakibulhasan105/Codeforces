#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int maxEqualSticks(long long n) {
    long long S = n * (n + 1) / 2;
    int result = 1;
    for (long long i = 1; i * i <= S; ++i) {
        if (S % i == 0) {
            if (i <= n) result = max(result, (int)i);
            if (S / i <= n) result = max(result, (int)(S / i));
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << maxEqualSticks(n) << '\n';
    }
    return 0;
}
