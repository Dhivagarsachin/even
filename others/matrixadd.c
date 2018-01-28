#include<stdio.h>
#include<conio.h>
int main ()
{
  int r, c, a[100][100], b[100][100], i, j, sum[100][100];
  printf ("enter the number of rows\n");
  scanf ("%d", &r);
  printf ("enter the number of columns");
  scanf ("%d", &c);
  printf ("enter the elements of matrix a\n");
  for (i = 0; i < r; ++i)
  {
    for (j = 0; j < c; ++j)
      {
	scanf ("%d", &a[i][j]);
      }
  }
  printf ("enter the elements of matrix b\n");
  for (i = 0; i < r; ++i)
 {
     for (j = 0; j < c; ++j)
      {
	scanf ("%d", &b[i][j]);
      }
 }
  printf ("sum of matrix a and matrix b is\n");
  for (i = 0; i < r; ++i)
{
    for (j = 0; j < c; ++j)
      {
	sum[i][j] = a[i][j]+b[i][j];
      printf ("%d\t", sum[i][j]);
      }
      printf("\n");
      }
  return 0;
}
