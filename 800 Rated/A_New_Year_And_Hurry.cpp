#include<iostream>
using namespace std;
int main()
{
    int n,k;
    int count=0;
    cin >> n >> k;
    int have_time=240-k;
    int time=0;
    for (int i = 1; i <= n; i++)
    {
        time+=5*i;
        if (time<=have_time)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count;

    return 0;
}
