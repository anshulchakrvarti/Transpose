#include <stdio.h>
int main()
{ // to change the given nXn  matrix to its transpose
    int row;
    printf("enter the number row:");
    scanf("%d", &row);
    int arra[row][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        { 
             scanf("%d",&arra[i][j]);
        }
    }
    printf("\n");
    for (int j, i = 0; i <row; i++)
    {
         for (int  j = 0; j < i; j++)
        {  int temp=arra[i][j];
            arra[i][j]=arra[j][i];
             arra[j][i] =temp;            
        }
    }
    printf("\n");
    for (int j, i = 0; i <row; i++)
    {
         for ( j = 0; j < row; j++)
        {  printf("%d ",arra[i][j]);           
        }
        printf("\n");
    }
    return 0;
}