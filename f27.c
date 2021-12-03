//revrse a given number
void revrse(int);

// main function
#include <stdio.h>
int main()
 {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    revrse(n);
 }
    
    void revrse(int n)
    {
    int rev = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
    
  }
