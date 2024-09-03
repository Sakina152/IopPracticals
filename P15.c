#include <stdio.h>
int main(){
    float maths,sc,eng,ss,comp,total,p;
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
    p=(total*100)/500;
    printf("Percentage is: %f\n",p);
    if(p>=90 && p<=100){
        printf("Your Division is A+");
    }
    else if(p>=75 && p<90){
        printf("Your Division is A");
    }
    else if(p>=50 && p<75){
        printf("Your Division is B");
    }
    else if(p>=33 && p<50){
        printf("Your Division is C");
    }
    else{
        printf("Your Division is E(Fail)");
    }
    return 0;

}