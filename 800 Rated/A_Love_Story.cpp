#include <iostream>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string s1;
        cin >> s1;
        string s2="codeforces";
        int count=0;
        for(int i=0;i<s2.size();i++){
            if(s1[i] != s2[i]) count++;
        }
        cout << count << endl;
    }
}