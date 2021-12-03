//The Number Is Positive or Negative
#include<stdio.h>
// prototype
 void checknumber(int);
// main function
 int main(){
 int a;
  
  printf("Please enter a number\n");
  scanf("%d",&a);
  checknumber(a);
  return 0;
  }
//defination
void checknumber(int a)
{
 if (a<0)
 printf("The number is negative");
  else
    printf("The number is positive");
}
