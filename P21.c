#include <stdio.h>
int main(){
    char o;
    float a,b,c;
    printf("Enter an operator(+,-,*,/):\n");
    scanf("%c",&o);

    printf("Enter two numbers:\n");
    scanf("%f  %f",&a,&b);

    switch(o){
        case '+': c=a+b;
        printf("%f + %f = %f\n",a,b,c);
        break;
        case '-': c=a-b;
        printf("%f - %f = %f\n",a,b,c);
        break;
        case '*': c=a*b;
        printf("%f * %f = %f\n",a,b,c);
        break;
        case '/': if(b!=0){ 
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