#include <stdio.h>
int main(){
    float f,c; //f=Fahrenheit c=Celsius
    printf("Enter Tempaerature in Fahrenheit:\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Temperature in Celsius = %f",c);
    return 0;
}