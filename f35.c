//Percentage of 5 Subjects.......
#include<stdio.h>
void parsentage(int,int,int,int,int);
void parsentage(int Hindi,int English,int Maths,int science,int soscience)
{
   int total=500,sum=0;
    float parsentage;
    sum=Hindi+English+Maths+science+soscience;
    parsentage=(sum*100)/total;
    printf("Parcentage is: %.2f",parsentage);
   }
   
   //run
   int main()
   {
   int Hindi,English,Maths,science,soscience;
   
    printf("Enter the number of Hindi subjet\n");
    scanf("%d",&Hindi);
    printf("Enter the number of English subjet\n");
    scanf("%d",&English);
    printf("Enter the number of Maths subjet\n");
    scanf("%d",&Maths);
    printf("Enter the number of Science subjet\n");
    scanf("%d",&science);
    printf("Enter the number of so-science subjet\n");
    scanf("%d",&soscience);
    parsentage(Hindi,English,Maths,science,soscience);
    }
