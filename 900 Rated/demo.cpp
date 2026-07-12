#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base:: sync_with_stdio(false); cin.tie(NULL);cin.tie(nullptr);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void phobia(int t){

    string str;
    cin >> str;
    int maxLength = 1;
    int currentLength = 1;
    for(int i = 1; i < str.size();i++)
    {
        if(str[i]== str[i-1]) currentLength++;
        else currentLength = 1;
        maxLength = max(currentLength,maxLength);
    }
    cout << maxLength;
}

int main()
{
    int tc = 1;
    cin >> tc; 
    while(tc--)
    {
        phobia(tc);
    }

    return 0;
}