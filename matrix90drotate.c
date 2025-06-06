#include <stdio.h>
int main()
{ // write a program to rotate a matrix 90 degree clockwise
    int row;
    printf("enter the number row:");
    scanf("%d", &row);
    int arra[row][row];
printf("enter the number in row");
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
         for ( j = 0; j < i; j++)
        { int temp=arra[i][j];
            arra[i][j]=arra[j][i];
            arra[j][i] =temp;  
             
        }
         
    }
    for (int  i = 0; i < row; i++)
    {
         int j=0;
         int k=row-1;
         while(j<k){ 
         int temp=arra[i][j];
         arra[i][j]=arra[i][k];
         arra[i][k]=temp;
         j++;
         k--;
         } 
    }printf("\n");
    for (int  i = 0; i <row; i++)
    {
         for (int  j = 0; j < row; j++)
        {   
             printf("%d ",arra[i][j]);
        }
         printf("\n");
    }
    return 0;
}
