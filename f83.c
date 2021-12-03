//convert string to astrisk.
# include<stdio.h>
void chara(char []);

void chara(char a[])
{
for(int i=0;a[i]!='\0';i++)
printf("*");
printf("\n");
} 

int main()
{
char a[100];
printf("Entre a string:\n");
scanf("%s",a);
chara(a);
return 0;
}


