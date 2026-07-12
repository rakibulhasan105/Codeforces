#include <iostream>
#include <algorithm>
using namespace std;

int  calculateVotes(int a, int b, int c) {
    int A = max(0, max(b, c) - a + 1);
   return A;
}
int main() {
      ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int A, B, C;
        A = calculateVotes(a, b, c);
        B = calculateVotes(b, a, c);
        C = calculateVotes(c, b, a);

        cout << A << " " << B << " " << C << endl;
    }
return 0;
}
