#include <iostream>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long int x,y,n;
        cin >> x >> y >> n;
        long long int k=0;
        for(long long int i=n;i>=0;i--){
            if(i%x==y){
                k=i;
                break;
            }
        }
        cout << k << endl;
    }
}