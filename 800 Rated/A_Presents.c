#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int arr01[num],arr02[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr01[i]);
        int temp= arr01[i];
        arr02[temp-1]=i+1;


    }
    for(int i=0;i<num;i++)
    {
        printf("%d ",arr02[i]);
    }
    return 0;
}
