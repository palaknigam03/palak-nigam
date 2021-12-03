//delet element desired or spacific position.
#include <stdio.h>
void deleting(int [],int);

int main()
  {
   int arr[100],n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);
   deleting(arr,n);
   }

void deleting(int arr[100], int n){
int i,pos;
   for (i= 0; i< n; i++)
      scanf("%d", &arr[i]);

   printf("Enter the location where you wish to delete an element:\n");
   scanf("%d",&pos);

   if (pos >= n+1)
      printf("Deleting not possible.\n");
   else
   {
      for (i = pos - 1; i < n - 1; i++)
         arr[i] = arr[i+1];

      printf("Resultant array:\n");

      for (i = 0; i < n - 1; i++)
         printf("%d\n", arr[i]);
   }
}
