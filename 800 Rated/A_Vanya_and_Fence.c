#include<stdio.h>
int main()
{
    int n,h;
    scanf("%d %d",&n, &h);
    int arr[n];
    int count = n;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>h)
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
