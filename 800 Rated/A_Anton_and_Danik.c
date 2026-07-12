#include<stdio.h>
#include<string.h>
int main()
{
    int num;
    scanf("%d",&num);
    int anton=0,danik=0;
    char str[num];
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='A')
            anton++;
        else
            danik++;
        i++;
    }
    if(anton>danik)
        printf("Anton");
    else if(anton<danik)
        printf("Danik");
    else
        printf("Friendship");

    return 0;
}
