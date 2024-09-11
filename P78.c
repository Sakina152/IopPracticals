#include <stdio.h>
#include<math.h>
int isArmstrong(int num){
    int orgNum,remainder,result=0,n=0;
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
        return 1;
    }
    else{
        return 0;
    }
}
    int main(){
        int num;
        printf("Enter an integer:\n");
        scanf("%d",&num);

        if(isArmstrong(num)){
            printf("%d is an Armstrong number.\n",num);
    }
    else{
        printf("%d is not an Armstrong number.\n",num);
    }
}
    
