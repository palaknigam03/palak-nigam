//read and print using recursion.
#include <stdio.h>
// Function declaration.
void printArray(int arr[], int , int);

int main()
{
    int arr[100];
    int n, i,start=0;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in the array: ");
    for(i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in the array: ");
    printArray(arr, start, n);
    
    return 0;
    }
    
void printArray(int arr[], int start, int len)
{
    if(start >= len)
        return;
    printf("%d", arr[start]);
    printArray(arr, start + 1, len); 
}
