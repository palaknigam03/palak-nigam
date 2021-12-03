//greater number among three
#include <stdio.h>  
 void greaterofthree(int,int,int);
 
 //main function 
int main()
 {  
    int a,b,c;  
    printf("Please Enter Three different values\n");  
    scanf("%d %d %d", &a, &b,&c);
    greaterofthree(a,b,c); 
 }  
 //defination
 void greaterofthree(int a,int b,int c)
 {   
 
    if(a > b && a > c) 
    {
        printf("%d is Largest\n", a);          
    } 
    else if (b > a && b > c)
    { 
        printf("%d is Largest\n", b);  
    } 
    else  
    {
	printf("%d is greater",c);
    } 
}

