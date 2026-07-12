#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],t[101];
    scanf("%s",s);
    scanf("%s",t);
    strrev(t);
    int result= strcmp(s,t);

    if(result==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
