#include <iostream>
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
        string str;
        cin >> str;
        int total_number_of_empty_cells = 0;
        bool continues_three_empty_cells = false;

        for (int i = 0; i < n; i++)
        {

            if (str[i] == '.' && i + 1 < n && str[i + 1] == '.' && i + 2 < n && str[i + 2] == '.')
            {
                continues_three_empty_cells = true;
                break;
            }
            if (str[i] == '.')
                total_number_of_empty_cells++;
        }

        if (continues_three_empty_cells)
            cout << 2 << endl;
        else
            cout << total_number_of_empty_cells << endl;
    }
    return 0;
}