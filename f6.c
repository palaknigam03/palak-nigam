// area of a triangle
#include <stdio.h>
void area(int,int);

void area(int h,int b)
  {
   int area;
   area=(h*b)/2;
   printf("area of trianglr is = %d",area);
  }

int mian()
{
 int h,b;
  printf("entre hight of the triangle:");
  scanf("%d",&h);
  printf("entre breath of the triangle:");
  scanf("%d",&b);
return 0;
}























#include<stdio.h>
int main(){
int h,b,area;
printf("entre hight of the triangle:");
scanf("%d",&h);
printf("entre breath of the triangle:");
scanf("%d",&b);
area=h*b/2;
printf("area of trianglr is= %d",area);
}

