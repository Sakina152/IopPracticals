#include <stdio.h>
int main(){
    float maths,sc,eng,ss,comp,total,percentage;
    printf("Enter marks of maths:\n");
    scanf("%f",&maths);
    printf("Enter marks of sc:\n");
    scanf("%f",&sc);
    printf("Enter marks of eng:\n");
    scanf("%f",&eng);
    printf("Enter marks of ss:\n");
    scanf("%f",&ss);
    printf("Enter marks of comp:\n");
    scanf("%f",&comp);
    total=maths+sc+eng+ss+comp;
    printf("Total marks is: %f\n",total);
    percentage=(total*100)/500;
    printf("Percentage is: %f",percentage);
    return 0;
}