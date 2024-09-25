#include <stdio.h>
int main(){
    int arr[10];
    int firstval,secondval;
    printf("Enter 10 integers:\n");
    for(int i=0;i<10;i++){
        
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10/2;i++){
        firstval=arr[i];
        secondval=arr[10-i-1];
        arr[i]=secondval;
        arr[10-i-1]=firstval;
    }
    printf("Reverse is :\n");
    for(int i=0;i<10;i++){
        
        printf("%d",arr[i]);
    }


}