//Convert lowercase string to uppercase.
#include <stdio.h>
#include<string.h>
char *touppercase(char[]);
int main(){
char s1[100];
char *p;
printf("Entre a string in lower case:\n");
scanf("%s",s1);
p=touppercase(s1);
printf("upercase:%s\n",p);
}
char *touppercase(char s1[]){
static char result[100];
int i;
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]>='a'&&s1[i]<='z'){
result[i]=s1[i]-32;
}
else
result[i]=s1[i];
}
result[i]='\0';
return result;
}

