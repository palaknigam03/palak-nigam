//A Character Is an Alphabet or Not
#include <stdio.h>
//prototype
void alphabet(char);
// main function
 
 int main(){
    char c;
    
    printf("Enter a character: ");
    scanf("%c", &c);
    alphabet (c);
    return 0;
}
//defination
void alphabet(char c)
{

 if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);
}
