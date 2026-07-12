#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        string str;
        cin >> str;
        if (n <= 2)
        {
            for (int i = 0; i < n; i++)
            {
                if (str[i] == '.')
                    count++;
            }
            cout << count << endl;
            continue;
        }

        bool isMagic = false;
        if (str[0] == '.')
            count++;
        for (int i = 1; i < n - 1; i++)
        {
            if (str[i] == '.')
                count++;
            if (str[i - 1] == '.' && str[i] == '.' && str[i + 1] == '.')
            {
                isMagic = true;
                break;
            }
        }
        if (str[n - 1] == '.')
            count++;

        if (isMagic)
            cout << 2 << endl;
        else
            cout << count << endl;
    }
    return 0;
}