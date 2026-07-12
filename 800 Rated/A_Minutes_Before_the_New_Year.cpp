#include <iostream>
using  namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int h,m;
        cin >> h >> m;
        int count=0;
        count = (24-(h+1))*60;
        count+= (60-m);
        cout << count << endl;
    }
}

/*
#include <iostream>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int h, m;
        cin >> h >> m;

        int total_minutes = h * 60 + m;
        int minutes_left = 1440 - total_minutes;

        cout << minutes_left << endl;
    }

    return 0;
}
*/