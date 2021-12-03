//Gross Salary of an Employee
#include<stdio.h>
void gs(int);
//Defination
void gs(int basic)
{
   float gross,da, ta;
   da = 0.1 * basic;
   ta = 0.12 * basic;
   gross = basic + da + ta;
   printf("Your Gross Salary is : %.2f",gross);
}
//Run
int main()
{
int basic;
   float gross,da, ta;
   printf("\n Enter Basic Salary : ");
   scanf("%d", &basic);
   gs(basic);
}
