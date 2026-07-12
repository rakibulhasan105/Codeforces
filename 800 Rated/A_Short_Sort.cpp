#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s1;
        cin >> s1;
        if(s1 == "bca" || s1== "cab") cout << "NO" << endl;
        else cout << "YES" << endl;
        
    }
    return 0;
}
