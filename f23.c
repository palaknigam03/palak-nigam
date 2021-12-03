//21Input any character and check whether it is the alphabet, digit or special character........
#include <stdio.h>
void check(char);
// Run....
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    check(ch);
    }
//Definetion....
void check(char ch){
    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf("%c is alphabet.", ch);
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("%c is digit.",ch);
    }
    else
    {
        printf("%c is special character.", ch);
    }
}
