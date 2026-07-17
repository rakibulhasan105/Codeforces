// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio     \
    cin.tie(NULL); \
    ios_base ::sync_with_stdio(false);

void pre()
{
    fastio;
}

void phobia(int t)
{
    string str;
    cin >> str;

    if (str.size() <= 3)
    {
        cout << "NO" << endl;
        return;
    }
    int index1 = -1;
    int index2 = -1;
    vector<char> vec;
    bool flag = false;
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i - 1] == 'A' && str[i] == 'B' || str[i - 1] == 'B' && str[i] == 'A')
        {
            flag = true;
            vec.push_back(str[i - 1]);
            vec.push_back(str[i]);
            if (str.size() > i + 1)
            {
                if (str[i - 1] == str[i + 1])
                    vec.push_back(str[i + 1]);
            }
            index1 = i - 1;
            index2 = i;
            break;
        }
    }

    if (flag)
    {
        flag = false;
        if (vec[0] == 'A')
        {
            for (int i = 1; i < str.size(); i++)
            {

                if (str[i - 1] == 'B' && str[i] == 'A' && index1 != i && index1 != i - 1 && index2 != i && index2 != i - 1)
                {
                    flag = true;
                    break;
                }
            }

            if (flag == false && vec.size() == 3)
            {
                for (int i = 1; i < str.size(); i++)
                {

                    if (str[i - 1] == 'A' && str[i] == 'B' && index1 + 1 != i && index1 + 1 != i - 1 && index2 + 1 != i && index2 + 1 != i - 1)
                    {
                        flag = true;
                        break;
                    }
                }   
            }
             if (flag)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;

                return;
        }
        else
        {
            for (int i = 1; i < str.size(); i++)
            {

                if (str[i - 1] == 'A' && str[i] == 'B' && index1 != i && index1 != i - 1 && index2 != i && index2 != i - 1)
                {
                    flag = true;
                    break;
                }
            }

            if (flag == false && vec.size() == 3)
            {

                for (int i = 1; i < str.size(); i++)
                {

                    if (str[i - 1] == 'B' && str[i] == 'A' && index1 + 1 != i && index1 + 1 != i - 1 && index2 + 1 != i && index2 + 1 != i - 1)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

            return;
        }
    }
    cout << "NO" << endl;

    return;
}

int32_t main()
{
    pre();

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

    return 0; // Hey, it's like a phobia..
}