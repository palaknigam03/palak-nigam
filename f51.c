//11Number Is Divisible By 11 Using (VEDIC MATH)....
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
  while (a!=0)
  if (a%11==0)
      printf ("%d Divide by 11\n",a);
  else
      printf("%d Not divide by 11\n",a);

}
