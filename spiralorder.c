#include <stdio.h>
int main()
{
  int n;
  printf("enter the row of matrix :");
  scanf("%d", &n);
  int a[n][n];
  printf("enter the elements of matrix:");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("\n");
  int minr = 0;
  int maxr = n - 1;
  int minc = 0;
  int maxc = n - 1;
  int totno = n * n;
  int count = 0;
  while (count < totno)
  {   if (count >= totno) break;
    for (int i = minc; i <= maxc; i++)
    {
      printf("%d ", a[minr][i]);
      count++;
    }
    minr++;
    if (count >= totno) break;
    for (int j = minr; j <= maxr; j++)
    {
      printf("%d ", a[j][maxc]);
      count++;
    }
    maxc--;
    if (count >= totno) break;
    for (int i = maxc; i >= minc; i--)
    {
      printf("%d ", a[maxr][i]);
      count++;
    }
    maxr--;
    if (count >= totno) break;
    for (int j = maxr; j >= minr; j--)
    {
      printf("%d ", a[j][minc]);
      count++;
    }
    minc++;
  }
  return 0;
}