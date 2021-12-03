//Count the total number of duplicate elements in an array.
#include <stdio.h>
void duplicate(int [],int);

int main()
  {
    int arr[100],size;
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array : ");
    duplicate (arr,size);
    return 0;
    }
    // defination.
    void duplicate(int arr[100],int size)
 {
    int count=0,i,j;
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
     // Find all duplicate elements in array.
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            // If duplicate found then increment count by 1.
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in array = %d", count);
 }


