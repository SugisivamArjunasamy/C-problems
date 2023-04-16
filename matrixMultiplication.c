#include <stdio.h>

int main()
{
  int a[50][50],b[50][50],c[50][50],i,j,k,row,col;
  printf("Enter the row and the coloume : \n");
  scanf("%d%d",&row,&col);

  printf("Enter the first matrix elements : \n");
  for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
        {
          scanf("%d",&a[i][j]);
        }
      printf("\n");
    }

  printf("Enter the secound matrix elements : \n");
  for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
        {
          scanf("%d",&b[i][j]);
        }
      printf("\n");
    }
  for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
        {
          c[i][j]=0;
          for(k=0;k<col;k++)
            {
              c[i][j]=a[i][k]*b[k][j];
            }
        }
    }
  printf("The multiplication of the matrix is : \n");
  for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
        {
          printf("%d",c[i][j]);
        }
      printf("\n");
    }

  
  
  return 0;
}
