#include <stdio.h>

void checkEvenOdd(int n){
    if(n%2==0){
        printf("%d is Even",n);
    }
    else{
        printf("%d is Odd",n);

    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    checkEvenOdd(n);
    return 0;
}
