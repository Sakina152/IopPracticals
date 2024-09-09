#include <stdio.h>
int main(){
    float n,fact=1;
    printf("Enter a number:\n");
    scanf("%f",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial of %f is %f",n,fact);
}