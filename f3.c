// hollow squre star pattern with diagonal
# include<stdio.h>
void diagonal();
int main()
     {
      printf("start.......\n");
       diagonal();
      printf("end.........\n");
	 return 0;
     }
void diagonal(){
int i,j,n;
printf("ENTRE A NUMBER OF ROWS : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
  {
	for (j=1;j<=n;j++)
	{
	if (i==1||i==n||j==1||j==n||i==j||(j==n-i+1))
	    {
	    printf("*");
	    
	    }
	else
	{
	printf(" ");
	}
	
      }
     printf("\n");
 }
}

