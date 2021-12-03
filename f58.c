//printf all negative elements in an array.
#include<stdio.h>
void negative(int [],int);

int main()
{
    int a[100],n;
   
    printf("Enter size of the array :\n");
    scanf("%d", &n);
 
    printf("Enter elements in array : \n");
    negative(a,n);
    }
    
    void negative(int a[100],int n)
   {
   int i;
    for(i=0; i<n; i++)
   {
        scanf("%d", &a[i]);
    
   }
    for(i=0; i<n; i++)
    {
        if(a[i] < 0)
        {
            printf("%d :\n",a[i]);
    
        }    
    }
}
