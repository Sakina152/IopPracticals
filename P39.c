#include <stdio.h>
int main(){
    int n;
    double fact=1,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+(i/fact);
        
    }
    printf("Sum of the form 1/1! +2/2!+....+n/n!=: %lf",sum);
}