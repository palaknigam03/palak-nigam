//pass arry to pointer 
#include<stdio.h>
void updateElement(int a[]);

int main()
{
int a[]={10,20,30,40,50};
updateElement (a);  //2000
for(int i=0;i<5;i++)
printf("%d\n",a[i]);
}
void updateElement(int p[])
{
for(int i=0;i<5;i++)
p[i]=p[i]+1;
}

