//Cube of any number using the function.    
#include<stdio.h>
int Cube(int);
int main()
{
  int N,R;
  printf("Enter a Number:\n");
  scanf("%d",&N);
  R=Cube(N);
  printf("%d cube is %d",N,R);
}
//Defination....
int Cube(int N){
 int result;
 result = N * N * N;
 return (result);
}
