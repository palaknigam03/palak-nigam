//convert a person's name in abbrevated//
#include<stdio.h>

void abbrevated(char,char,char);

void abbrevated(char fname,char mname,char lname)
{

 printf("entre your first name:\n");
 printf("entre your middle name:\n");
 printf("entre your last name:\n");
 scanf("%s%s%s",fname,mname,lname);
 printf("Abbreviated name: \n");
 abbrevated(fname,mname,lname);
 printf("%c.%c.%s\n",fname [0],mname [0],lname);
}

 int main()
 {
 char fname[10],mname[10],lname[10];
 char fname,mname,lname;
 abbrevated (fname,mname,lname);
 return 0;
 }
     
     
     
     
 
     
    
