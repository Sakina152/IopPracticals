#include <stdio.h>
int main(){
    float s,c;
    printf("Enter the sales amount:\n");
    scanf("%f",&s);
    if(s<=500){
        c=s*0.05;
    }
    else if(s>500 && s<=2000){
        c=35+(s-500)*0.10;
    }
    else if(s>2000 && s<=5000){
        c=185+(s-2000)*0.12;
    }
    else{
        c=s*0.125;
    }
    printf("The commision is Rs.%f",c);
    return 0;
}