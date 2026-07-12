#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int count = 0;
        if (a < b)
            count++;
        if (a < c)
            count++;
        if (a < d)
            count++;
        cout << count << endl;
    }
}

// vector<int> vec;
// int a;
// cin >> a;
// vec.push_back(a);
// int count = 0 ;
// for(int i=1;i<=3;i++)
// {
//     cin >> a;
//     vec.push_back(a);
//     if(vec[0]<vec[i]) count++;

// }
// cout << count;
