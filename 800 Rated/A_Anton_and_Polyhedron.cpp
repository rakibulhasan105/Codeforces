#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int count = 0;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        if (s == "Tetrahedron")
            count += 4;
        else if (s == "Cube")
            count += 6;
        else if (s == "Octahedron")
            count += 8;
        else if (s == "Dodecahedron")
            count += 12;
        else count+=20;
            
    }
    cout << count;
}