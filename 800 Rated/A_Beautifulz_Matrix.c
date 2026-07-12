#include<stdio.h>
#include <stdlib.h>
int main()
{
    int matrix[5][5];
    int row_num=0,col_num=0;
    int min_moves=0;
    for(int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1)
            {
                row_num=i;
                col_num=j;
            }
        }
    }
    min_moves = abs(row_num - 2) + abs(col_num - 2);
    printf("%d\n",min_moves);
    return 0;
}

