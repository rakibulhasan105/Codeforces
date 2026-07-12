#include <iostream>
using namespace std;

bool isSquareString(const string& s) {
    int len = s.length();
    if (len % 2 != 0) return false;

    string firstHalf = s.substr(0, len / 2);
    string secondHalf = s.substr(len / 2);
    return firstHalf == secondHalf;
}

int main() {

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;

        if (isSquareString(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
return 0;
}
