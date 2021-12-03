//•	Input month number and print number of days in that month
#include<stdio.h>
int monthcountday();
int main (){
    monthcountday();
}
int monthcountday(){
    int month;
    printf("Enter a number of month (1-12)\n");
    scanf("%d",&month);
      if(month==1)
      printf("31 Days");
      else if(month==2)
      printf("28-29 Days");
      else if(month==3)
      printf("31 Days");
      else if(month==4)
      printf("30 Days");
      else if(month==5)
      printf("31 Days");
      else if(month==6)
      printf("30 Days");
      else if(month==7)
      printf("31 Days");
      else if(month==8)
      printf("30 Days");
      else if(month==9)
      printf("31 Days");
      else if(month==10)
      printf("30 Days");
      else if(month==11)
      printf("31 Days");
      else if(month==12)
      printf("30 Days");
      else 
      printf("you have enter wrong choise");
    return 0;
}
