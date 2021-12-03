//Equilateral triangle: All three sides are equal.
//Isosceles triangle: All two sides are equal.
//Scalene triangle: No sides are equal.
//•	Check whether the triangle is an equilateral, isosceles or scalene triangle
#include<stdio.h>
void side(int , int , int );
//main function
int main()
{
    int side1,side2,side3;
    printf("Enter the three side of triangle\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    side(side1,side2,side3);
}
//defination of function
void side(int side1, int side2, int side3)
{
    if(side1==side2&&side2==side3)
    printf("this is equilateral triangle\n");
    else if(side1==side2||side2==side3||side3==side1)
    printf("this is isoscles triangle\n");
    else
    printf("this is scalene triangle");
}
