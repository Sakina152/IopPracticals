#include <stdio.h>
int main(){
    int n,sum=0;
    while(1){
    printf("Enter a number:\n");
    scanf("%d",&n);
    if (n<0){
        break;
    }
    sum+=n;
    }
    printf("Sum of numbers= %d\n",sum);
    return 0;


}