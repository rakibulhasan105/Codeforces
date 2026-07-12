
#include <iostream>
using namespace std;

int countFizzBuzz(int n) {
    return (n / 15) * 3 + min(3, (n % 15 + 1));
}

int main() {
ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << countFizzBuzz(n) << endl;
    }
    return 0;
}
