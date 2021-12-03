//17Find whether a number is even or odd.....
#include<stdio.h>
void EO(int);
//Run...
int main(){
int a;
	printf("Enter a no.");
	scanf("%d",&a);
	EO(a);
}
//Definition....
void EO(int a){
  if (a%2==0)
     printf ("%d Divide by 2\n",a);
  else
     printf("%d Not divide by 2\n",a);
}
