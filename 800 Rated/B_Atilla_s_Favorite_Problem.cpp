#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        string str;
        cin >> str;
        int max=0;
        for(int i=0;i<num;i++){
            int temp = (int)str[i];
            if(temp>max) max=temp; 
        }
        cout <<(max-96) << endl;
    }
    return 0;
}