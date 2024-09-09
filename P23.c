#include <stdio.h>
int main(){
    int base,power;
    float result=1;
    printf("Enter base:\n");
    scanf("%d",&base);
    printf("Enter the power:\n");
    scanf("%d",&power);

    for(int i=1;i<=power;i++){
        result*=base;
    }
    printf("%d ^ %d is %f\n",base,power,result);
    return 0;

}