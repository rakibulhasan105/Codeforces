#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,count=0;
    cin >> n >> m;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
        if (i * i + j == n && i + j * j == m) {
                count++;
            }
        }
    }
    cout << count << endl;
}