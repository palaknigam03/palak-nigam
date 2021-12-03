//factorial of any number 
#include<stdio.h>
void factorial(int);

void factorial(int a)
{
	int i,f;
    	f=i=1;
    	while(i<=a)
    	{
        	f*=i;
        	i++;
    	}
    	printf("The Factorial of %d is : %d",n,f);
}
int main()
{
	int a=4;
 	 factorial(a);
 }
 
