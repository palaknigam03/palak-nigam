//23Input week number and print weekday........
#include<stdio.h>
void week(int);
//Run...
int main()
{
 int w;
    printf("Enter a number of week[1-7]");
    scanf("%d",&w);
 week(w);
}
//Defination......
void week(int w){
	if (w==1)
		printf("Monday");
	else if (w==2)
		printf("Tuesday");
	else if (w==3)
		printf("Wednesday");
	else if (w==4)
		printf("Thursday");
	else if (w==5)
		printf("Friday");
	else if (w==6)
		printf("Saturday");
	else if (w==7)
		printf("Sunday");
	else 
	printf("you Enter a wrong number");
	}
