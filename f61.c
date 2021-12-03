//count even and odd.
#include <stdio.h>
void evenodd(int [],int);

int main()
{
    int arr[100],size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements in array: ", size);
    evenodd(arr,size);
    return 0;
    }
    
    void evenodd(int arr[100],int size){
    int even=0,odd=0,i;
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);
}
