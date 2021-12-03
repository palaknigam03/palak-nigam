//print ascii value.
#include <stdio.h>
//prototype
void character(char);
//main function
int main(){  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    character(c);
    }  
   //defination
   void character( char c){ 
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
   }

