//find armstrong or not
#include<stdio.h>
void arm(int);
//main function
int main(){
int n;
printf("Entre a number\n");
scanf("%d",&n);
arm(n);
return 0;
}
//defination
void arm(int n)
{
int sum=0,temp,r;
temp=n;
while(n!=0)
{
r=n%10;
sum=sum+r*r*r;
n=n/10;
}
if(sum==temp)
printf("it is armstrong number\n");
else 
printf("not an armstrong number\n");
}
