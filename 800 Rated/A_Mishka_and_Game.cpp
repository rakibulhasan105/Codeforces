#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    
    int num; 
    cin >> num;
    int count1=0,count2=0;
    while(num--){
        int a,b;
        cin >> a >> b;
        if(a>b) count1++;
        else if(a<b) count2++;
 }
 if(count1>count2) cout << "Mishka" << endl;
 else if(count1<count2) cout << "Chris" << endl;
 else cout <<  "Friendship is magic!^^" << endl;
}