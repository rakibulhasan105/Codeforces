/*
আমার কাছে তোমার লেখা কোন চিঠি নেই, কোন প্রতিস্রতি নেই..
সাদায় কিন্তু অদ্ভুত তুমি.. 
*/

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio       ios_base ::sync_with_stdio(false); cin.tie(NULL);

void phobia(int tc)
{
    long long  a,b;
    cin >> a >> b;
    if(a<b) swap(a,b);
    int temp1 = (a+b)/3;
    int temp2 = b;
    int count = min(temp1,temp2);
    cout << count << endl;

   return;
}



int main()
{
    fastio;
    int tc = 1;
    cin >> tc;
    while(tc--)
    {
        phobia(tc);
    }

return 0; //                Hey, it's like a phobia..
}