//max number between three
#include<stdio.h>
//prototype
void maxthree(int,int,int);

//main function
int main()
{
int a,b,c;
printf("ENTRE ANY THREE NUMBER TO FIND MAX:\n");
scanf("%d%d%d",&a,&b,&c);
maxthree(a,b,c);
}
//defination
void maxthree(int a,int b, int c)
{
if(a > b && a > c) 
    {
        printf("%d is max\n", a);          
    } 
    else if (b > a && b > c)
    { 
        printf("%d is max\n", b);  
    } 
    else  
    {
	printf("%d is max",c);
    } 
}

