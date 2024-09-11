#include <stdio.h>
int main(){
    int n,num,max,secondmax;
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    if(n<2){
        printf("Atleast two numbers are required.\n");
        return 1;
    }
    printf("Enter number 1: ");
    scanf("%d",&num);
    max=num;

    secondmax=-2147483648;

    for(int i=2;i<=n;i++){
        printf("Enter number %d: ",i);
        scanf("%d",&num);
        if (num>max){
            secondmax=max;
            max=num;
        }
        else if(num>secondmax && num!=max){
            secondmax=num;
        }
    }
    printf("Maximum: %d\n",max);
    printf("Second maximum: %d\n",secondmax);
    return 0;


}