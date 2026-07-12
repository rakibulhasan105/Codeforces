#include<stdio.h>
int main()
{
    int a,b;
    int count_year=0;
    scanf("%d %d",&a, &b);
    for(int i=0; a<=b; i++)
    {
        a*=3;
        b*=2;
        count_year++;
    }
    printf("%d",count_year);
    return 0;
}
