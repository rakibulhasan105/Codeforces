#include <iostream>
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
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin >> vec[i];
        }
        
        int maxLength = 0, currentLength = 0;

        for (int i = 0; i < n; ++i) {
            if (vec[i] == 0) {
                currentLength++;
                maxLength = max(maxLength, currentLength);
            } else {
                currentLength = 0;
            }
        }

        cout << maxLength << endl;
        // cout << currentLength ;

    }

}