//add two matrix.
#include <stdio.h>
void adding(int ,int,int [][100],int [][100]);

int main()
 {
  int r, c, a[100][100], b[100][100];
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);

  printf("Enter elements of 1st matrix:\n");
  adding(r,c,a,b);
  return 0;
  }
  
  
  void adding(int c,int r,int a[][100],int b[][100])
  {
    int sum[100][100], i, j;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("Sum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }
}

