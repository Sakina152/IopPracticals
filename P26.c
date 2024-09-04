#include <stdio.h>
int main(){
    int n,i;
    int sumeven=0,sumodd=0;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            sumeven=sumeven+i;
        }
        else{
            sumodd=sumodd+i;
        }
    }
        
    printf("Sum of even numbers between 1 to %d = %d\n",n,sumeven);
    printf("Sum of odd numbers between 1 to %d = %d\n",n,sumodd);
}