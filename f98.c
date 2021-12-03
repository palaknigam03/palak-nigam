//Copy one string to another string.
#include <stdio.h>
#include<string.h>
void copy(char[],char[]);

int main()
{
    char arr1[100];
    char arr2[100];
    printf("Enter any string: ");
    scanf("%s",arr1);
    copy(arr1,arr2);
    return 0;
    }
    
    void copy(char arr1[],char arr2[])
    {
    int i;
    for(i=0; arr1[i]!='\0'; i++)
    {
        arr2[i] = arr1[i];
    }
    arr2[i] = '\0';

    printf("First string = %s\n", arr1);
    printf("Second string = %s\n", arr2);
    printf("Total characters copied = %d\n", i);
}
