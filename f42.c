//Character Is Vowel or Consonant
#include <stdio.h>
//prototype
void checklatter(char);
// main function
int main(){
    char c; 
  
    printf("Enter an alphabet: \n");
    scanf("%c", &c);
    checklatter (c);
    return 0;
}
// defination
void checklatter(char c) 
{
     char lowercase_vowel, uppercase_vowel;
     lowercase_vowel = (c=='a' || c =='e' || c =='i' || c =='o' || c =='u');

    
     uppercase_vowel = (c=='A' || c =='E' || c =='I' || c =='O' || c =='U');

   
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);

}
