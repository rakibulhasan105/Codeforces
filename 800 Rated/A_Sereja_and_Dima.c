#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int v[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&v[i]);
    }
    int sereja=0,dima=0;
    int left=0,right=n - 1;
    int flag=1;
    while(left <= right)
    {
        int chosen;
        if(v[left]>v[right])
        {
            chosen=v[left];
            left++;
        }
        else
        {
            chosen=v[right];
            right--;
        }
        if(flag)
        {
            sereja+=chosen;
            flag=0;
        }
        else
        {
            dima+=chosen;
            flag=1;
        }
    }
    printf("%d %d\n", sereja, dima);
    return 0;
}
