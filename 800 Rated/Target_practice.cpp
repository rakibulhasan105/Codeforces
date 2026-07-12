#include <iostream>
using namespace std;
#define fastio ios_base ::sync_with_stdio(false); cin.tie(NULL);

void pre()   // rafio sir
{
    fastio;
}


const int score[10][10]= {
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1},
};

 void phobia()
 {
    char arr[10][10];

    for(int i = 0; i<10; i++)
    {
        for(int j = 0; j<10; j++)
        {
            cin >> arr[i][j];
        }
    }
    int total = 0;

    for(int i = 0; i<10; i++)
    {
        for(int j = 0; j<10; j++)
        {
            if(arr[i][j]=='X')
            total+= score[i][j];
        }
    }

    cout << total << endl;




 }
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        phobia();
        
    }
    return 0;
}