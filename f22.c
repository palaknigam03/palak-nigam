/20Input any alphabet and check whether it is vowel or consonant........
#include <stdio.h>
void vowel(char);
//Run....
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
     vowel(ch);
}
//Defination...
void vowel(char ch){
     if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
  	  printf("%c is a vowel.\n", ch);
     else
   	  printf("%c is not a vowel.\n", ch);
}
