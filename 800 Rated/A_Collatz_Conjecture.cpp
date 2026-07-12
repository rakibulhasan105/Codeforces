#include <iostream>
using namespace std;
#define fastio                         \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);

void pre() // rafio sir
{
    fastio;
}

void phobia()
{
    int k, n;
    cin >> k >> n;
    // int final_x = 0;
    for (int i = 1; i <= k; i++)
    {
        
         n *= 2;
    }

    cout << n << endl;
}

int main()
{
    pre();

    int t;
    cin >> t;
    while (t--)
    {
        phobia();
    }

    return 0; // Hey, it's like a phobia..
}