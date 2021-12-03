//Maximum and minimum between two numbers using functions.
#include <stdio.h>
void max_min( int, int);
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
     max_min(num1, num2);
}    
// Defination
    void max_min( int num1, int num2 ){
    if(num1 > num2)
    {
        printf("%d is maximum", num1);        
    }
    if(num2 > num1)
    {
        printf("%d is maximum", num2);
    }
    if(num1 == num2)
    {
        printf("Both are equal");
    }
}
