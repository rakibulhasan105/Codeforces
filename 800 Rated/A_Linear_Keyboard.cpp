#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string keyboard_order;
        cin >> keyboard_order;

        int position[26];
        for (int i = 0; i < 26; ++i)
        {
            position[keyboard_order[i] - 'a'] = i;
        }
        string s;
        cin >> s;

        int time = 0;
        int current_pos = position[s[0] - 'a'];

        for (int i = 1; i < s.length(); ++i)
        {
            int next_pos = position[s[i] - 'a'];
            time += abs(next_pos - current_pos);
            current_pos = next_pos;
        }

        cout << time << endl;
    }

    return 0;
}
