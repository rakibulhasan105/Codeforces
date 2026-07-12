#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec(3);
   // cin >> vec[0] >> vec[1] >> vec[2];
    for(int i=0;i<vec.size();i++){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int result = (vec[1]-vec[0])+(vec[2]-vec[1]);
    cout << result;

    return 0;
}
