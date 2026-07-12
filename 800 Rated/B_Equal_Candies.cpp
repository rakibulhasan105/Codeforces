#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long num_of_candie=0;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin >> vec[i];
        }
        sort(vec.begin(),vec.end());
        for(int i=1;i<n;i++){
            num_of_candie+= (vec[i]-vec[0]);
        }
        cout << num_of_candie << endl;
    }

}