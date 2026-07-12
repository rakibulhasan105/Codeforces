#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int num;
    cin >> num;
    vector<int> vec(num);
    int good_at_programing=0,good_at_math=0,good_at_PE=0;
    for(int i=0;i<num;i++){
        cin >> vec[i];
        if(vec[i]==1) good_at_programing++;
        else if( vec[i]==2) good_at_math++;
        else good_at_PE++;
    }
    int count=min(good_at_programing,good_at_math);
    count=min(count,good_at_PE);
    cout << count << endl;
    vector<int> posi1(count);
    vector<int> posi2(count);
    vector<int> posi3(count);
    for(int i=0;i<num;i++)
    {
        if(vec[i]==1) posi1.push_back(i);
        else if(vec[i]==2) posi2.push_back(i);
        else posi3.push_back(i);
    }
    for(int i=0;i<count;i++)
    {
        cout<< posi1[i+1] <<" " << posi2[i] << " " << posi3[i] << endl;
    }

    return 0;
}