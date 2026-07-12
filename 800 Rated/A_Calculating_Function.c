#include<stdio.h>
int main()
{
    long long int  num;
   long long int sum=0;
    scanf("%lld",&num);
    if (num % 2 == 0)
    {
        sum=num/2;
    }
    else
    {
        sum= -(num+1)/2;
    }
    printf("%lld",sum);
    return 0;
}
