#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int min_value = min(a, b);
        int max_value = max(a, b);
        min_value *= 2;
        if (min_value >= max_value)
            cout << (min_value * min_value) << endl;
        else
            cout << (max_value*max_value) << endl;
    }
    return 0;
}

// ChatGPT solution 
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int t; // number of test cases
//     cin >> t;

//     while (t--) {
//         int a, b;
//         cin >> a >> b;

//         // Try placing both in different ways and find the minimum square side needed
//         int side1 = max(2 * a, b); // both side by side (horizontally)
//         int side2 = max(2 * b, a); // both side by side (vertically)
//         int side3 = max(a + b, max(a, b)); // placed next to each other with one possibly rotated

//         int min_side = min({side1, side2, side3});

//         cout << min_side * min_side << endl; // area = side * side
//     }

//     return 0;
// }
