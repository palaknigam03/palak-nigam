//•	Input angles of a triangle and check whether the triangle is valid or not.
#include<stdio.h>
void trianglecheck(int,int,int);
int main(){
  int angle1,angle2,angle3;
    printf("Enter three number of trianglen");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    trianglecheck(angle1,angle2,angle3);
}
 void trianglecheck(int angle1,int angle2,int angle3){
   int sum;
     sum=angle1+angle2+angle3;
    if(sum==180 && angle1 >0 && angle2>0 && angle3>0)
      printf("Valid triangle\n");
    else
      printf("Invalid triangle\n");
    
 }
