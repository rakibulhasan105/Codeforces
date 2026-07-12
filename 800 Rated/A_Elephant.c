#include<stdio.h>
int main()
{
    int x,point=0;
    scanf("%d",&x);
    int count=0;

    for(int i=0;point<x;i++)
    {
        point+=5;
        count++;
    }
    printf("%d",count);
    return 0;
}
