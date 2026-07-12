#include<iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string a,b,c;
    cin >> a ;
    cin  >> b;
    cin >> c;
  
    a=a+b;
    sort(a.begin(), a.end());
 
    std::sort(c.begin(), c.end());
   
    if(a==c) cout << "YES";
    else cout << "NO";


return 0;
}