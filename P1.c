#include <stdio.h>
int main(){
    //Calculating Simple Interest
    float p,r,t,i;
    printf("Enter principal amount:\n");
    scanf("%f",&p);
    printf("Enter Annual interest rate:\n");
    scanf("%f",&r);
    printf("Enter Time(in years) :\n");
    scanf("%f",&t);
    i=(p*r*t)/100;
    printf("Simple Interest is: %f \n", i);
    return 0;

}