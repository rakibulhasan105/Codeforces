#include <iostream>
#include <string>
using namespace std;
string pi = "314159265358979323846264338327";

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int count = 0;
        for (int i = 0; i < str.size() && i < pi.size(); i++)
        {
            if (str[i] == pi[i])
                count++;
            else
                break;
        }
        cout << count << endl;
    }
    return 0;
}
