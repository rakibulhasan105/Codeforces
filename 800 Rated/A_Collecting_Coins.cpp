#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        vector<long long> vec(3);
        cin >> vec[0] >> vec[1] >> vec[2];
        cin >> n;
        
        sort(vec.begin(), vec.end());

        long long a = (vec[2] - vec[1]) + (vec[2] - vec[0]);

        if (n < a) {
            cout << "NO" << endl;           //  must check if n < a? 
        }
        else {
            n -= a;
            if (n % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     ios_base ::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         vector<long long> vec(3);
//         cin >> vec[0] >> vec[1] >> vec[2];
//         cin >> n;
//         sort(vec.begin(), vec.end());
//         int a = (vec[2] - vec[1]) + (vec[2] - vec[0]);
//         n -= a;
//         if (n % 3 == 0)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
// }