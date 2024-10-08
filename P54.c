#include <stdio.h>
int main(){
    //Program to read array of 10 int and print sum of it
    int arr[10];
    int sum=0;
    printf("Enter 10 integers:\n");
    for(int i=0;i<10;i++){
        scanf("%d\n",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum of the numbers is %d",sum);
    return 0;
}