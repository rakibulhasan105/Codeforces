#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[1000];
    if (fgets(str, sizeof(str), stdin))
    {
        if (isalpha(str[0]))
        {
            str[0] = toupper(str[0]);
        }
    }
    printf("%s", str);
    return 0;
}
