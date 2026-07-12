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
        int one_gram_candy=0;
        int two_gram_candy=0;
        for(int i=0;i<n;i++){
            cin >> vec[i];
            if(vec[i]==1) one_gram_candy++;
            else two_gram_candy++;
        }
        int total_weight = one_gram_candy+ 2 * two_gram_candy;

        if (total_weight % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        if ((total_weight / 2) % 2 != 0 && one_gram_candy == 0) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

    }
    return 0;
}