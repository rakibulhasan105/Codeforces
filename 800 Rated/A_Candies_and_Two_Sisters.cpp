#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int count = 0;
         long long int i = 1;
        long long int j = n - 1;
        while (i < j)
        {
            count++;
            i++;
            j--;
        }
        cout << count << endl;
    }
}