#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int arr[num];
    int count=0;
    for(int i=0; i<num; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
        {
            count++;
        }
    }
    if(count>0)
        printf("HARD");
    else
        printf("EASY");

    return 0;
}
