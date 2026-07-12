#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;

        cin >> n;

        long long sum = 1;

        while(n!=1)
        {
            sum+=n;
            n/=2;
        }
        cout << sum << endl;
            
       
    }

    return 0;
}