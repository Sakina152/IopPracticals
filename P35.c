#include <stdio.h>
int main(){
    int n,sum=0,digit;
    printf("Enter a number:\n ");
    scanf("%d",&n);
     //processing each digit of a number
     while(n>0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
     }

     printf("Sum of the digits of number = %d",sum);
     return 0;

}