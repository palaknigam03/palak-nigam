//Check whether a number is even or odd using functions.
#include<stdio.h>
// prototype
 void even_odd(int);
// main function
 int main(){
 int a;
  
  printf("Please enter a number\n");
  scanf("%d",&a);
  even_odd(a);
  return 0;
  }
//defination
void even_odd(int a)
{
 if (a%2==0)
 	printf("The number is even");
  else
        printf("The number is odd");
}
