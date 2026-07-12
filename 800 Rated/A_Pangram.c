#include <stdio.h>
#include <ctype.h>

int main()
{
    int num;
    scanf("%d", &num);
    getchar();

    char arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%c", &arr[i]);
    }

    int found[26] = {0};

    for (int i = 0; i < num; i++)
    {
        char c = tolower(arr[i]);
        if (c >= 'a' && c <= 'z')
        {
            found[c - 'a'] = 1;
        }
    }

    int all_present = 1;
    for (int i = 0; i < 26; i++)
    {
        if (!found[i])
        {
            all_present = 0;
            break;
        }
    }

    if (all_present)
        printf("YES");
    else
        printf("NO");

    return 0;
}
