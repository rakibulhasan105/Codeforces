#include <stdio.h>
int main()
{
    char str[100];
    int i, count = 0;
    int seen[26] = {0};
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        int index = str[i] - 'a';
        if (seen[index] == 0)
        {
            seen[index] = 1;
            count++;
        }
    }
  //  printf("Total different letters: %d\n", count);
    if(count%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
        printf("IGNORE HIM!");
    return 0;
}
