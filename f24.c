//22Check whether a character is an uppercase or lowercase alphabet.....
#include <stdio.h>
void ul(char );
//Run...
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
     ul(char c);
}
//Defination
void ul(char c){
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);
}
