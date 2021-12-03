//Count the total number of negative elements in an array.
#include <stdio.h>
void negative(int [],int);

int main()
{
    int arr[100];
    int n;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    negative(arr,n);
    return 0;
    }
    
    void negative(int arr[100],int n)
    {
    int i,count=0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            count++;
        }
    }

    printf("\nTotal negative elements in array = %d", count);
}
