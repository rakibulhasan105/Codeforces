#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    char arr[num];
    scanf("%s",arr);
    int count=0;
    for(int i=1; i<num; i++)
    {
        if(arr[i-1]==arr[i])
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
