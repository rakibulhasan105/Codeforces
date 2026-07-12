#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a>b) swap(a,b);
        cout << a <<" "<< b << endl;
    }
}