//The Greatest Number Among the Given Three Number
#include <stdio.h>
// prototype
void greater(int,int,int);
//main function
 int main()
 {
  int a, b, c;
 
    printf("Enter three different numbers: ");
    scanf("%d%d%d",&a,&b,&c);
     greater(a,b,c);
  return 0;
  }
//defination
void greater( int a, int b, int c)
 {
  
    if  (a>b && a>c)
    {
      printf("The greater number is %d",a);
    }
    
    if (b>a && b>c)
    {
      printf("The greater number is %d",b);
    
    }
    if (c>a && c>b)
    {
      printf("The greater number is %d",c);
    }

}
