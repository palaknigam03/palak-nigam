//greater of two number
#include <stdio.h>  
 void greateroftwo(int,int);
 
 //main function 
int main()
 {  
    int a, b;  
    printf("Please Enter Two different values\n");  
    scanf("%d %d", &a, &b);
    greateroftwo(a,b); 
 }  
 //defination
 void greateroftwo(int a,int b)
 {   
 
    if(a > b) 
    {
        printf("%d is Largest\n", a);          
    } 
    else if (b > a)
    { 
        printf("%d is Largest\n", b);  
    } 
    else 
    {
	printf("Both are Equal\n");
    } 
}

