#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> vec1(4);
   // vector <int> vec2(3);
    for(int i=0;i<4;i++)
    cin >> vec1[i];
    sort(vec1.begin(), vec1.end());
    int SumOfAll = vec1[3];
    // for(int i=0;i<3;i++)
    // vec2[i] = SumOfAll - vec1[i];
    for(int i = 0;i<3;i++)
    {
        cout << SumOfAll - vec1[i] << " ";
    }

    // for(int val : vec2)
    // cout << val << " ";

}