#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        priority_queue<int> q;
        for(int i=1;i<=3;i++){
            int a;
            cin >> a;
            q.push(a);
        }
        q.pop();
        cout << q.top() << endl;
    }
}