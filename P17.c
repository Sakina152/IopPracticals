#include <stdio.h>
int main(){
    int a,b,c,max;
    printf("Enter three numbers:\n");
    scanf("%d  %d  %d",&a,&b,&c);

    if(a>=b && a>=c){
        max=a;
    }
    else if(b>=a && b>=c){
        max=b;
    }
    else{
        max=3;
    }
    printf("The maximum number is : %d",max);
    return 0;
}