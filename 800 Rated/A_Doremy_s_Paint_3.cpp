// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> vec(n);
//         for (int &x : vec)
//             cin >> x;
//         sort(vec.begin(), vec.end());
//         bool a = true;
//         for (int i = 0; i < n - 2; i++)
//         {
//             if (n == 2)
//             {
//                 a = true;
//                 break;
//             }
//             int p = vec[i] + vec[i + 1];
//             int q = vec[i + 1] + vec[i + 2];
//             if (p != q)
//             {
//                 a = false;
//                 break;
//             }
//         }
//         if (a)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isGoodArray(vector<int>& a) {
    int n = a.size();
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 2; ++i) {
        int sum1 = a[i] + a[i + 1];
        int sum2 = a[i + 1] + a[i + 2];
        if (sum1 != sum2) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;

        sort(a.begin(), a.end());

        if (n == 2 || isGoodArray(a)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}


// not work