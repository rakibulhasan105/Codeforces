#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> vec(n);
    int stor = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
     for(int i=0;i<n;i++){
         if(vec[i]==-1)
        {
           if(stor>0)stor--;
           else count++;
        }
        else stor+=vec[i];
    }
    cout << count << endl;
return 0;
}