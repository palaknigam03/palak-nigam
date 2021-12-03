//squre star pattern//
#include<stdio.h>
 void squre();
 int main()
 {
	 printf("start.......\n");
 squre();
 	printf("end.......\n");
 return 0;
 }
 
 void squre(){
int i,j,n;
printf("ENTRE A NUMBER OF ROW:  ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{		
	for (j=1;j<=n;j++)
	{	
	printf("*");
	}		
	printf("\n");
}
}
