//18Check whether a year is a leap year or not...
#include<stdio.h>
void ly(int);
//Run
int main(){
int year;
	 printf("Enter a year\n");
	 scanf("%d",&year);
	 ly(year);
}
//Defination...
void ly(int year)
{
	  if (year%4==0||year%400==0||year%100==0)
		printf("%d it is a leap year",year);
	  else 
		printf("%d is not a leap year\n",year);
}
