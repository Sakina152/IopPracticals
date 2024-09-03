#include <stdio.h>
int main(){
    int o;
    float a,b,c;
    printf("Enter an operator(1=+,2=-,3=*,4=/):\n");
    scanf("%d",&o);

    printf("Enter two numbers:\n");
    scanf("%f  %f",&a,&b);

    switch(o){
        case 1: c=a+b;
        printf("%f + %f = %f\n",a,b,c);
        break;
        case 2: c=a-b;
        printf("%f - %f  = %f\n",a,b,c);
        break;
        case 3: c=a*b;
        printf("%f * %f = %f\n",a,b,c);
        break;
        case 4: if(b!=0){ 
            c=a/b;
            printf("%f / %f = %f\n",a,b,c);
        }
        else{
            printf("Error! Division by zero.\n");
        }
        break;
        default: printf("Invalid operator");
    }

    return 0;
}