//bubble sort in c.
# include<stdio.h>
void bubblesort(int [],int);

int main()
{
  int array[100], n;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);
  bubblesort(array,n);
  return 0;
  }  
  
void bubblesort(int array[100],int n)
{
int i,d,swap;
  for (i= 0; i< n; i++)
    scanf("%d", &array[i]);

  for (i = 0 ; i<n-1; i++)
  {
    for (d = 0 ; d < n-i-1; d++)
    {
      if (array[d] > array[d+1])
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i= 0; i < n; i++)
     printf("%d\n", array[i]);
}
