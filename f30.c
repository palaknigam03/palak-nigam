//palindrome or not
#include<stdio.h>
//prototype
void palindrome(int);
//main function
int main()
{
	int n;
	printf("Entre any number:\n");
	scanf("%d",&n);
	palindrome(n);
}
//defination
void palindrome(int n)
{
  int r,sum=0,temp;
  temp=n;
  while(n!=0)
   {
	r=n%10;
	sum=sum*10+r;
	n=n/10;
   }
        if(sum==temp)
	   printf("number is palindrome");
       else
	   printf("not a palindrome");
 
}
