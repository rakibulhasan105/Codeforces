#include<stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int upper=0,lower=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            upper++;
        }
        else
            lower++;
    }
    if(upper>lower)
    {
        int i=0;
        while ( str[i]!='\0')
        {
            str[i]=toupper(str[i]);
            printf("%c",str[i]);
            i++;
        }
    }
    else
    {
        int i=0;
        while ( str[i]!='\0')
        {
            str[i]=tolower(str[i]);
            printf("%c",str[i]);
            i++;
        }
    }
    return 0;
}
