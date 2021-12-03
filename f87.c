//Copy all elements from an array to another array.
#include <stdio.h>
void copy(int);
//main function.
int main()
{
    int size;
    
    printf("Enter the size of the array :\n");
    scanf("%d", &size);
    printf("Enter elements of source array :\n");
    copy(size);
    return 0;
    }
    //defination.
    void copy(int size)
{
    int i,source[100],dest[100];
    for(i=0; i<size; i++)
    {
        scanf("%d", &source[i]);
    }
    for(i=0; i<size; i++)
    {
        dest[i] = source[i];
    }
    printf("\nElements of source array are :");
    for(i=0; i<size; i++)
    {
        printf("%d", source[i]);
    }
    printf("\nElements of dest array are : \n");
    for(i=0; i<size; i++)
    {
        printf("%d", dest[i]);
    }
}
