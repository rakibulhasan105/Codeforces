// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(0);  ios_base ::sync_with_stdio(0);


int maxLength(vector<int> str ,int k)
{
    int count = 0;
    int currentLength = 0;
 
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i]==0)
        {
            currentLength++;
        }
        else
        {
            currentLength = 0;
        }

        if(currentLength == k)
        {
            count++;
            i++;
            currentLength = 0;
        }
    }
 
    return count;
}
 
void phobia(int t)
{
    int n, k;
    cin  >> n >> k;
    vector<int> vec(n);
    for(auto & val : vec) cin >> val;

    int count = maxLength(vec,k);

    cout << count << endl;

return;    
}

int32_t main()
{
    fastio;

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

 return 0;            // Hey, it's like a phobia..
}
