#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char arr01[100],arr02[100];
    scanf("%s",arr01);
    scanf("%s",arr02);

    for(int i=0; arr01[i]; i++)
    {
        arr01[i]=tolower(arr01[i]);
        arr02[i]=tolower(arr02[i]);
    }
    int cam=strcmp(arr01,arr02);
    if(cam<0)
        printf("-1");
    else if(cam>0)
        printf("1");
    else
        printf("0");

    return 0;
}
