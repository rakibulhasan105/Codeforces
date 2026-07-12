#include<stdio.h>
int main()
{
    int n;
    int X=0;
    char ch[5];
    scanf("%d",&n);
    while((getchar())!='\n');
    for(int i=0; i<n; i++)
    {
        scanf("%s",ch);

        if (ch[0]=='+' || ch[1]=='+')
        {
            X++;
        }
        else
        {
            X--;
        }
    }
    printf("%d\n",X);
    return 0;
}
