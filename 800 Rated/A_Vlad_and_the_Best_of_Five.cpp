#include<iostream>
#include <string>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int A_most=0,B_most=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='A') A_most++;
            else B_most++;
        }
        if(A_most>B_most) cout << 'A' << endl;
        else cout << 'B' << endl;
    }
}
