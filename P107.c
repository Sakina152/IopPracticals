#include <stdio.h>
#include <math.h>
int reverseNumber(int num){
    int reverse=0;
    while(num>0){
        reverse=reverse*10+(num%10);
        num/=10;
    }
    return reverse;
}
int FLIP(int num,int n){
    int divisor=pow(10,n);
    int lastNdigits=num%divisor;
    int remaining=num/divisor;
    int flipped=reverseNumber(lastNdigits);
    return remaining*divisor+flipped;
    
}
int main(){
    int num,n;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter n(number of digits to be flipped): ");
    scanf("%d",&n);
    printf("FLIP(%d,%d)=%d.",num,n,FLIP(num,n));
    return 0;
}