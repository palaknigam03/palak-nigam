//sum of natural numbers.
#include <stdio.h>
//prottype
void natural(int);
//main function
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    natural(n);
    }
 //defination
 void natural( int n){
 int sum=0,i=1;
    while (i<= n){
        sum += i;
        ++i;
    }

    printf("Sum = %d", sum);
}
