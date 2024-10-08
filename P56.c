#include <stdio.h>
int main(){
    int arr[10];
    int countPositive=0,countNegative=0,countZero=0;
    printf("Enter 10 integers:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            countPositive++;
        }
        else if(arr[i]<0){
            countNegative++;
        }
        else{
            countZero++;
        }
    }
    printf("Total number of positive number =%d\n",countPositive);
    printf("Total number of negative number =%d\n",countNegative);
    printf("Total number of zero =%d\n",countZero);

}