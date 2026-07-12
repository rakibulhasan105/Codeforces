#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fastio       ios_base ::sync_with_stdio(false); cin.tie(NULL);

void pre() // rafio sir
{
    fastio;
}

void phobia()
{
   long long n;
   cin >> n;
   long long digit = n;

   while (n!= 0)
   { 
    int temp = n%10;
    n/=10;
    if(digit>temp) digit = temp;

   }

   cout << digit << endl;
   

}

int main()
{
    pre();


    int tc;
    cin >> tc;
    while (tc--)
    {
        phobia();
    }

    return 0;     // Hey, it's like a phobia..
}