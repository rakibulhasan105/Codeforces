#include <iostream>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str1,str2;
        cin >> str1;
        cin >> str2;
        bool isSame=true;

        for(int i=0;i<n;i++){
            if(str1[i]==str2[i]) continue;
            else if(str1[i]=='G' && str2[i]=='B') continue;
           else if(str1[i]=='B' && str2[i]=='G') continue;
           else {
            isSame=false;
            break;
           }
        }

        if(isSame) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}