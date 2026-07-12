#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int length;
    int max_length = 1, current_length = 1;
    scanf("%s",str);
    length = strlen(str);
    if (length == 0)
    {
        printf("0\n");
    }
    else
    {
        for (int i = 1; i < length; i++)
        {
            if (str[i] == str[i - 1])
            {
                current_length++;
                if (current_length > max_length)
                {
                    max_length = current_length;
                }
            }
            else
            {
                current_length = 1;
            }
        }
        printf("%d\n",max_length);
    }
    return 0;
}
