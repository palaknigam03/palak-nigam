//9Find A Generic Root Of Number(123=1+2+3=6)
#include <stdio.h>
void GR(int);
int main()
{
    int num;
    printf("Please Enter any number = ");
    scanf("%d", &num);
     GR(num);
    }
    void GR(int num){
    int sum,rem;
    while(num >= 10)
    {
        for (sum=0; num > 0; num= num/10)
        {
            rem = num % 10;
            sum=sum + rem;
        }
        if(sum >= 10)
        {
            num = sum;
        }
        else
        {
            printf("Generic Root of Given num = %d", sum);
            break;
        }
    }
}
