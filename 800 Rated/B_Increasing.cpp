#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vec(n);
        bool isStrictlyIncreasing = true;
        for(int i=0;i<n;i++){
            cin >> vec[i];
        }
        sort(vec.begin(),vec.end());
        if(n==1) {
            cout << "YES" << endl;
            continue;
        }

        for(int i=0;i<n-1;i++){
            if(vec[i]== vec[i+1]) {
                isStrictlyIncreasing=false;
                break;
            }

        }
        if(isStrictlyIncreasing) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}