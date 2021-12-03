//maximum between two numbers
//prototype
void max(int,int);
#include<stdio.h>
//main function
int main(){
int a,b;
  printf("ENTRE TWO NUMBERS:\n");
  scanf("%d %d",&a,&b);
  max(a,b);
return 0;
}
//defination
void max(int a,int b)
{   
  if(a > b) 
    {
        printf("%d is maximum\n", a);          
    } 
    else if (b > a)
    { 
        printf("%d is maximum\n", b);  
    } 
    else 
    {
	printf("Both are Equal\n");
    } 
}

