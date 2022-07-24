//c program to multiply two matrix of order m X n and n X p.
#include<stdio.h>
void main()
{
  int A[50][50], B[50][50], R[100][100], m, n, p, q, i, j, k, s=0;
  printf("\tEnter the order of matrix A and B:\n Enter the order the matrix A:\n");
  scanf("\t %d %d", &m, &n);
  printf("\tmatrix A is of order %dX%d \n Enter the order of matrix B:\n",m,n);
  scanf("\t %d %d", &p, &q);
  printf("\tmatrix B is of order of %dX%d\n", p, q);
  if(n != p)
  {
    printf("\tMatrix multiplication of matrices with these order is not possible.\n");
    printf("\t**Remark:For matrix multiplication No. of columns of 1st matrix should be equal to No of rows of 2nd");
  }
  else
  {
    printf("\n\nEnter the values of matrix A:\n");
    for(i = 0; i < m ; i++)
    {
      for(j = 0; j < n ; j++)
      {
        scanf("%d", &A[i][j]);
      }
    }
    printf("\nEnter the values of matrix B:\n ");
    for(i = 0; i < p; i++)
    {
      for(j = 0; j < q; j++)
      {
        scanf("%d", &B[i][j]);
      }
    }
    for(i = 0; i < m; i++)
    {
      for(j = 0; j < q; j++)
      {
        for(k = 0; k < n; k++)
        {
          s = s + A[i][k]*B[k][j] ;
        }
        R[i][j] = s;
        s = 0;
      }
    }
    printf(" Resultant is as follows:\n");
    for(i = 0; i < m; i++)
    {
      printf("\n");
      {
        for(j = 0; j < q; j++)
        {
          printf("\t %d", R[i][j]);
        }
      }
    }
  }
}