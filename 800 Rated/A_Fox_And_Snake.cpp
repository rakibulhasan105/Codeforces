/*#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
             if (i % 2 != 0)
            {
                cout << '#';
            }
            else if (i % 2 == 0)
            {
                  if(a%2==0 && j==1){
                    cout << '#';
                    a++;
                }
                else if (a % 2 != 0 && j == m){
                    cout << '#';
                    a++;}
               
                else
                cout << '.';
            }

            
        }
        cout << endl;
    }
}*/
#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (i % 3 == 0 || i % 3 == 2) {
                // Full row of #
                cout << "#";
            } else {
                // Zigzag pattern on odd rows
                if ((i / 3) % 2 == 0) {
                    // # on the right
                    cout << (j == w - 1 ? "#" : ".");
                } else {
                    // # on the left
                    cout << (j == 0 ? "#" : ".");
                }
            }
        }
        cout << endl;
    }

    return 0;
}
