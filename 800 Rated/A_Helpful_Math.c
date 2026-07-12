#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int length=0;
    while (s[length] != '\0')
    {
        length++;
    }
    //printf("%d",length);
    // int len = strlen(s);
    for (int i = 0; i < length; i += 2)
    {
        for (int j = i + 2; j < length; j += 2)
        {
            if (s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("%s\n", s);
    return 0;
}
