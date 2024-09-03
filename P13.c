#include <stdio.h>
int main(){
    //Program to check if a number is even or odd
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    if(n%2==0){
        printf("Even");
    }
    else{
        printf("Odd");

    }
    return 0;
}