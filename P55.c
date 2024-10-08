#include <stdio.h>
int main(){
    int arr[10];
    int countOdd=0,sum[10],digit;
    printf("Enter 10 integers:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2 != 0){
            countOdd++;
        }
    }
    printf("Total number of odd numbers =%d\n",countOdd);
    for(int i=0;i<10;i++){
        while(arr[i]>0){
            digit=arr[i]%10;
            sum[i]=0;
            sum[i]+=digit;
            arr[i]=arr[i]/10;
        }
        printf("Sum of digits of number%d is %d\n",(i+1),sum[i]);
    }


}