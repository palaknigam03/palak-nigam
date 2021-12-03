//leap yaer
//prototype

#include<stdio.h>
void leap(int);
int main()
{
int yr;
printf("entre a year:\n");
scanf("%d",&yr);
leap(yr);  
}
//defination

void leap(int yr)
{
   if(yr%400==0||yr%100==0||yr%4==0)
      printf("It is LEAP YEAR.");
   else
      printf("It is NOT LEAP YEAR.");    
}
