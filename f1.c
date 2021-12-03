//function //
#include<stdio.h>
void hollowpiramid();

int main(){
               printf("start........\n");
   hollowpiramid();
   		printf("end.........\n");
   }
void hollowpiramid(){
 int i,j,n,k,space;
 printf("ENTRE A NUMBER : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
  for(space=i;space<n;space++)
  printf(" ");
   for(k=1,j=i;(k<=2*i-1);k++){
  	 if(j==2*i||k>i)
   {
  	 printf("%d ",j);
   }
   else
  	 ("%d ",j);
   }
   printf("\n");
  	 }
   }
   
   

