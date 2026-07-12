#include <iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        ios_base :: sync_with_stdio(false);
        cin.tie(NULL);
        int n,k;
        cin >> n >> k;
        string str ;
        cin >> str;
        vector<int>vec;
        for(int i=0;i<n;i++){
            if(str[i]=='B') {
                int x=i+1;
                vec.push_back(x);
            }
        }
        int count=0;
        for(int i=0;i<vec.size();i++){

        }
    }

}