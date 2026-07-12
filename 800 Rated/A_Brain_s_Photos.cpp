// #include <iostream>
// using namespace std;
// int main(){
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     int row,column;
//     cin >> row >> column;
//     char arr[row][column];
//     bool isColored=false;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cin >> arr[i][j];
//             if(arr[i][j]== 'C' || arr[i][j]== 'M' || arr[i][j]== 'Y') isColored=true;
//         }
//     }
//     if(isColored) cout << "#Color" << endl;
//     else cout << "#Black&White" << endl;
// }


// another way
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int row, column;
    cin >> row >> column;
    bool isColored = false;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            char c;
            cin >> c;
            if (c == 'C' || c == 'Y' || c == 'M')
            {
                isColored = true;
            }
        }
    }
    if (isColored)
    {
        cout << "#Color" << endl;
    }
    else
    {
        cout << "#Black&White" << endl;
    }
}