#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        int moves = (abs(a - b) + 9) / 10;
        
        cout << moves << endl;
    }
    return 0;
}
