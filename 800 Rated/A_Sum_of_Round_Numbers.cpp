#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>vec;
        int posi=1;
        while(n>0){
            int digit=n%10;
            if(digit!=0){
                vec.push_back(digit*posi);
            }
            n/=10;
            posi*=10;
        }

        cout << vec.size()<< endl;
        for(int val : vec){
            cout << val << " ";
        }


    }
    }
