//selection sort in c.
#include <stdio.h>

void selection(int [],int);

int main() 
{
   int arr[10]={10,20,50,30,70,5,2,6,9,80};
   int n=10;
   selection(arr,n);
   return 0;
   }
   
   void selection(int arr[10],int n)
   {
   int i, j, position, swap;
   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\n", arr[i]);
}
