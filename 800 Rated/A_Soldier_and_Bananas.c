#include<stdio.h>
int main()
{
    int k,n,w;
    int sum=0;
    int borrow=0;
    scanf("%d %d %d",&k, &n, &w);

    for(int i=1; i<=w; i++)
    {
        sum=sum+(i*k);
    }
    borrow=sum-n;
    if(borrow>0)
    {
        printf("%d",borrow);
    }
    else
        printf("%d",0);
    return 0;
}
