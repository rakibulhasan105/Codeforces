#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long s, m;
        cin >> n >> s >> m;

        vector<pair<long long, long long>> tasks(n);
        for (int i = 0; i < n; ++i) {
            cin >> tasks[i].first >> tasks[i].second;
        }

        bool canShower = false;

        
        if (tasks[0].first >= s) {
            canShower = true;
        }

      
        for (int i = 1; i < n; ++i) {
            long long gap = tasks[i].first - tasks[i - 1].second;
            if (gap >= s) {
                canShower = true;
                break;
            }
        }

        
        if (m - tasks[n - 1].second >= s) {
            canShower = true;
        }

        cout << (canShower ? "YES" : "NO") << '\n';
    }

    return 0;
}
