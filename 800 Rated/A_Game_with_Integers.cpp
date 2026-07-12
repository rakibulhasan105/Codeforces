#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        if ((num + 1) % 3 == 0)
        {
            cout << "First" << endl;
        }
        else if ((num - 1 )% 3 == 0)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
}