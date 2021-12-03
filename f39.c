//	Input all sides of a triangle and check whether the triangle is valid or not
#include<stdio.h>
void sidestriangle(int , int , int );
int main(){
    int side1,side2,side3;
    printf("Enter all side of triangle\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    sidestriangle(side1,side2,side3);

}
void sidestriangle(int side1,int side2,int side3){
    //a+b=c
    //b+c=a
    //a+c=b
    if((side1+side2)>side3)
    {
        if((side2+side3)>side1)
        {
            if((side1+side3)>side2)
            {
            printf("triangle is valid");
            }
             else
        printf("triangle is not valid");
        }
        else
        printf("triangle is not valid");
    }
    else 
     printf("triangle is not valid");
}
