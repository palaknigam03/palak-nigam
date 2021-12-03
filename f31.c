//display fibonacci series
#include<stdio.h>
 void fibonacci(int);
 //main function
int main()
 {
    int len,f1,f2;
    printf("enter length of the  fibonacci series:");
    scanf("%d",&len);
     fibonacci(len);
 
     // It prints the starting two values
 }
     //defination
void fibonacci(int len)
{
      int f1=1,f2=-1,f3,i=0;
      while(i<len)           // checks the condition
      {
       
        f3=f1+f2;               // performs add operation on previous two  values
        printf("\t%d",f3);      // It prints from third value to given length
        f2=f1;
        f1=f3;
        i=i+1; // incrementing the i value by 1
     }
  
 } 
