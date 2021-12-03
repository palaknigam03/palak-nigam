/16Check whether a number is divisible by 5 and 11 or not.....
#include<stdio.h>
void Divide(int);
//Run...
int main(){
int a;
	printf("Enter a no.");
	scanf("%d",&a);
	Divide(a);
}
//Definition....
void Divide(int a){
  if (a%5==0)
     printf ("%d Divide by 5\n",a);
  else
      printf("%d Not divide by 5\n",a);
  if (a%11==0)
      printf ("%d Divide by 11\n",a);
  else
      printf("%d Not divide by 11\n",a);

}
