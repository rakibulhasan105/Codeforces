#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    vector<int>host(n),guest(n);
    for(int i=0;i<n;i++){
        cin >> host[i] >> guest[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && host[i]==guest[j]) count++;
        }
    }
    cout << count;

    return 0;
}