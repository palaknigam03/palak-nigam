//GCD usiing loop
#include <stdio.h>
void gcd(int,int);

int main()
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
     gcd(n1,n2);
     }
     
     void gcd(int n1,int n2)
     {
     int gcd,i;
    for(i=1; i <= n1 && i <= n2; i++)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);
}
