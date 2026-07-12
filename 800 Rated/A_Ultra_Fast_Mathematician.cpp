#include <iostream>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;

    int size = a.length();
     char c[size];
    for (int i = 0; i < size; i++)
    {
        if (a[i] != b[i])
            c[i] = '1';
        else
            c[i] = '0';
    }

    for(int i=0;i<size;i++){
        cout << c[i];
    }
}