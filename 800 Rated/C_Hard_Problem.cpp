/***                                  সাদায় কিন্তু অদ্ভুত তুমি..                           ***/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio   cin.tie(NULL);  ios_base ::sync_with_stdio(false);

void phobia(int t)
{
   int m,a,b,c;
   cin >> m >> a >> b >> c;
   int count = 0;

   if(a>=m) count+=m;
   else count+=a;

   if(b>=m)count +=m;
   else count+=b;

   if(count==m*2) {cout << count <<  endl; 
    return;}
   else{
     if(2*m -count<=c) count=2*m;
     else count+=c;
   }
 cout << count << endl;

}

int32_t main()
{
   
    fastio;

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

    
 return 0;                     
//                                      Hey, it's like a phobia..
}