#include <bits/stdc++.h>
using  namespace std;
#define fastio ios_base:: sync_with_stdio(false); cin.tie (NULL);

void pre()   // rafion sir
{
    fastio;
}
int index_find (string str, char c , int index)
{
    for(int i = index; i<str.size();i++)
    {
        if(str[i]==c) return i;
    }
    return -1;


}

void phobia()
{
    string str;
    cin >> str;
    string str2 = "hello";
    int temp_index = -1;
    for(int i = 0; i<5; i++)
    {
        temp_index = index_find(str,str2[i],temp_index+1);
        {
            if(temp_index == -1) {cout << "NO" << endl;
            return;}
        }

        
    }
    cout << "YES" << endl;

}

int32_t main()
{
    pre();

 phobia();
    

return 0;
}             // Hey, it's like a phobia..