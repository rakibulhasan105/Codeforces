#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue<int> q;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        q.push(a);
    }
    int max = q.top();
    q.pop();

    while (!q.empty())
    {
        sum += (max - q.top());
        q.pop();
    }
    cout << sum << endl;
}