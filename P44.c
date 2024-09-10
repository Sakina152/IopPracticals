#include <stdio.h>
int main(){
    int n;
    float amount;
    printf("Enter the number of units consumed:\n");
    scanf("%d",&n);
    if(n<=200){
        amount=n*0.50;
    }
    else if(n>200 && n<=400){
        amount=100+(n-200)*0.65;
    }
    else if(n>400 && n<=600){
        amount=230+(n-400)*0.80;
    }
    else{
        amount=425+(n-600)*125;
    }
    printf("The amount to be paid is: Rs%lf\n",amount);
    return 0;
}