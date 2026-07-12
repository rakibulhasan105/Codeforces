#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> found(n, 0);
    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        found[x - 1] = 1;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        found[x - 1] = 1;
    }
    int all_present = 1;
    for (int i = 0; i < n; i++)
    {
        if (!found[i])
        {
            all_present = 0;
            break;
        }
    }

    if (all_present)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}