#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float x,y;
    printf("Enter the value of x:\n");
    scanf("%f",&x);
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    if(n==1){
        y=1+x;
    }
    else if(n==2){
        y=1+(x/n);
    }
    else if(n==3){
        y=1+pow(x,n);
    }
    else if(n>3 || n<1){
        y=1+(n*x);
    }
    printf("The value of y(x,n) = %f\n",y);
}
