#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isComposite(int num) {
    if (num <= 3) return false;
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0)
            return true;
    return false; 
}
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int x = 4; x <= n / 2; ++x) {
        int y = n - x;
        if (isComposite(x) && isComposite(y)) {
            cout << x << " " << y << endl;
            return 0;
        }
    }
    cout << "No valid pair found." << endl;
    return 0;
}
