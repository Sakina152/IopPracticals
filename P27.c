#include <stdio.h>
int main(){
    int n,i,prime=1;
    printf("Enter a positive integer:\n");
    scanf("%d",&n);

    if(n==0 || n==1){
        prime=0;
        
    }
    else{
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                prime=0;
                break;
            }
        }
    }
    if(prime==1){
        printf("%d is a prime number.\n",n);
    }
    else{
        printf("%d is not a prime number.\n ",n);
    }
    
    return 0;
}