//second largest element using recurstion.
#include<stdio.h>
int main(){

    int i,j,max,count=0,temp;
    int arr[7]={10,20,20,18,20,11,14};
    max=arr[0];
    for(i=0;i<7;i++){
     if(arr[i]<max){
         max =arr[i];
     }

    }
/*
    for(i=0;i<7-1;i++){
        for(j=i+1;j<7;j++)
        if(arr[i]<arr[j]&&arr[i]>max){
              temp=arr[i];
        }
    }
    printf(" 2nd smallest value %d\n",temp);

*/

    max=arr[0];
    for(i=0;i<7;i++){
     if(arr[i]>max){
         max =arr[i];
     }

    }

    for(i=0;i<7-1;i++){
        for(j=i+1;j<7;j++)
        if(arr[i]>arr[j]&&arr[i]<max){
              temp=arr[i];
        }
    }
    printf("2nd largest element %d\n",temp);
}
