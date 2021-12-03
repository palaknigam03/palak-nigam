//voting eligibility
#include<stdio.h>

// prototype

void eligibility(int);

// main function

int main()
{
	int n;
	printf("Entre your age:\n");
	scanf("%d",&n);
	eligibility(n);
	return 0;
}

//defination

void eligibility(int n)
{
 if (n>=18)
  printf("yor are eligible for voting:\n");
 else
  printf("you are not eligible right now:\n");
}
