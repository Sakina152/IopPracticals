#include <stdio.h>
#include <math.h>
int main(){
    int num,orgNum,remainder,result=0,n=0;
    printf("Enter an integer:\n");
    scanf("%d",&num);
    orgNum=num;

    while(orgNum!=0){
        orgNum/=10;
        n++;
    }

    orgNum=num;

    while(orgNum!=0){
        remainder=orgNum%10;
        result=result+pow(remainder,n);
        orgNum/=10;
    }
    if(result==num){
        printf("%d is an Armstrong number.\n",num);
    }
    else{
        printf("%d is not an Armstrong number.\n",num);
    }
    return 0;
}