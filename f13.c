//date is correct or not
#include <stdio.h>
//prototype
void checkdate(int,int,int);
//main function
  int main()
{
 int dd,mm,yy;
    printf("Enter date (DD/MM/YYYY)format: \n");
    scanf("%d/%d/%d",&dd,&mm,&yy);  
    checkdate(dd,mm,yy);
}
 //defination
 void checkdate(int dd,int mm, int yy)
 {
  //check year
    if(yy>=1900 && yy<=9999)
    {
        //check month
        if(mm>=1 && mm<=12)
        {
            //check days
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=28) && (mm==2))
                printf("Date is valid.\n");
            else if(dd==29 && mm==2) 
                printf("Date is valid.\n");
            else
                printf("Day is invalid.\n");
        }
        else
        {
            printf("Month is not valid.\n");
        }
    }
    else
    {
        printf("Year is not valid.\n");
    }   
}
