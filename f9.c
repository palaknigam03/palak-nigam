//display function
#include<stdio.h>
void size();
void size()
{
 int inttype;
 float floattype;
 double doubletype;
 char chartype;
 // size of evaluates the size of variable
 printf("size of int:%zu bytes\n",sizeof(inttype));
 printf("size of float:%zu bytes\n",sizeof(floattype));
 printf("size of dobuble:%zu bytes\n",sizeof(doubletype));
 printf("size of char:%zu bytes\n",sizeof(chartype));
 }
 int main()
 {
 size();
 }
 
