#include <stdio.h>
int main(){
    float a,b,c,gross;
    printf("Enter Basic Salary:\n");
    scanf("%f",&a);
    printf("Enter HRA:\n");
    scanf("%f",&b);
    printf("Enter other allowances:\n");
    scanf("%f",&c);
    gross=a+b+c;  //Gross salary=Basic salary+HRA+Other allowances
    printf("Gross salary = %f",gross);
    return 0;



}