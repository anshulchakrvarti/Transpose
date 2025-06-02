#include <stdio.h>
int main()
{
    int row, colume;
    printf("enter the number row:");
    scanf("%d", &row);
    printf("enter the number colume");
    scanf("%d", &colume);
    int arra[row][colume];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colume; j++)
        {
            scanf("%d", &arra[i][j]);
        }
    }
    printf("\n");
    for (int  i = 0; i < colume; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", arra[j][i]);
        }
        printf("\n");
    }
    return 0;
}