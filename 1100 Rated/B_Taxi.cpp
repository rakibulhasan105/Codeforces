// সাদায় কিন্তু অদ্ভুত তুমি..
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio cin.tie(0); ios_base :: sync_with_stdio(0);

void pre()
{
    fastio;
}

void phobia(int t)
{
    long long n;
    cin >> n;
    int one = 0, two = 0, three = 0, four = 0;
    for(int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        if(temp == 1) one++;
        else if(temp == 2) two++;
        else if(temp == 3) three++;
        else four++;
    }
    int count = four;


    if(three>0) 
    {
        count+=three;
        
        if(one>three)one-=three;
        else one = 0;
        three = 0;
    }


    if(two%2==0){ 
        count+= (two/2);
        if(one%4==0) count+= (one/4);
        else  count+=(one/4+1);
        
    }
    else {
        count+=(two/2+1);
        if(one%4==0 ) count+= (one/4);
        else if(one%4==3) count+=(one/4+1);
        else count+= (one/4);

        
    }


    
    cout << count << endl;

}


int32_t main()
{
    pre();

    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        phobia(tc);
    }

    return 0;          // Hey, it's like a phobia..
    
}