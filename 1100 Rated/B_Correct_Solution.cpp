#include <bits/stdc++.h>
using  namespace std;
#define fastio ios_base:: sync_with_stdio(false); cin.tie (NULL);

void pre()   // rafion sir
{
    fastio;
}

void phobia()
{
    string str1,str2;
    cin >> str1;
    cin >> str2;
    int count  = 0;
int sum1 = 0;
for(int i = 0; i<str1.size();i++)
{
    sum1+=str1[i]-'0';
}
int sum2 = 0;
for(int i = 0; i<str2.size();i++)
{
    sum2+=str2[i]-'0';
}

if(sum1 == 0 && sum2 == 0  && str1.size()== str2.size())
{
    cout << "OK" << endl;
    return;
}

    sort(str1.begin(),str1.end());

    for(int i = 0;str1[i]!= 0;i++)
    {
        if(str1[i]=='0') count++;
    }
    int dev = count;
    vector <char > vec;
    if(str1[str1.size()-1]=='0')
    {
        cout << "WRONG_ANSWER" << endl;
        return;
        
    }
    vec.push_back(str1[count]);
    
    while(count--)
    {
        vec.push_back('0');

    }
   // for(char  val : vec) cout << val;
//cout << endl;
   
    string su = str1.substr(dev+1);

    //cout << su;
    int a = su.size();
    for(int i = 0;i<a;i++)
    {
        vec.push_back(su[i]);
    }
   // for(char  val : vec) cout << val;

     string v_as_string(vec.begin(), vec.end());

     if(v_as_string == str2) cout << "OK" << endl;
     else cout << "WRONG_ANSWER" << endl;



    
    
}


int32_t main()
{
    // int tc;
    // cin >> tc;
    // while(tc--)
    // {
    //     phobia();
    // }
    phobia();

return 0;
}             // Hey, it's like a phobia..