#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int live_in[100],capacity[100];
    for(int i=0; i<num; i++)
    {
        scanf("%d %d",&live_in[i], &capacity[i]);
    }
    int count=0;
    for(int i=0; i<num; i++)
    {
        int sum =capacity[i]-live_in[i];
        if(sum>=2)
        {
            count++;
        }
        sum=0;
    }
    printf("%d",count);
    return 0;
}
