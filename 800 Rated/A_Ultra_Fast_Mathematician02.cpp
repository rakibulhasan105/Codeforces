#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c = {0};
    cin >> a >> b;
    int size = a.length();
    c.resize(size);
    for (int i = 0; i < size; i++)
    {
        if (a[i] != b[i])
            c[i] = '1';
        else
            c[i] = '0';
    }

    cout << c;
}