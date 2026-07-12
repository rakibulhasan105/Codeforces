#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> vec(n);
        for (long long &s : vec)
        {
            cin >> s;
        }
        
        long long int first_point = 0;
        long long int max_distance = (x - vec[vec.size() - 1]) * 2;
        for (int i = 0; i < vec.size(); i++)
        {
            long long int distance = vec[i] - first_point;
            if (distance > max_distance)
            {
                max_distance = distance;
            }
            first_point = vec[i];
        }
        cout << max_distance << endl;
    }
}