#include <stdio.h>
#define max(a,b)(((a)>(b))?(a):(b))
int main(){
    int a,b;
   
    printf("Enter number1: ");
    scanf("%d",&a);
    printf("Enter number2: ");
    scanf("%d",&b);
    printf("Biggest of the two given numbers is: %d.",max(a,b));
    return 0;
}