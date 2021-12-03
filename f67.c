//Find diameter, circumference and area of a circle using function
#include<stdio.h>
int Diameter(int );
int Cirmference(int );
int area(int );
int main(){
 int r,c,choise;
 do{
 printf("Enter 1 for diameter of circle\n");
 printf("Enter 2 for diameter of circle\n");
 printf("Enter 3 for diameter of circle\n");
 scanf("%d",&choise);
 switch (choise){
 case 1: printf("Enter a Radius of circle\n");
	 scanf("%d",&r);
	 c = Diameter(r);
	 printf("Diameter of circle %d\n",c);
 	 break;
 case 2: printf("Enter a Radius and  of circle\n");
	 scanf("%d",&r);
 	 c = Cirmference(r);
 	 printf("circumference of circle %d\n",c);
 	 break;
case 3:  printf("Enter a radius of Area of circle\n");
	 scanf("%d",&r);
 	 c = area(r);
 	 printf("Area of circle %d\n",c);
 	 break;
//default: 	 
}
}
while(!choise);
}
//Defination
int Diameter(int r){
 int circle;
 circle = 2 * r;
 return circle;
 }
 //
 int Cirmference(int r){
  int circle;
  circle = 2 * 3.14 * r;
  return circle;
 }
 //
 int area(int r){
  int circle;
  circle = 3.14 * r * r;
  return circle;
 }
