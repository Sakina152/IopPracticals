#include <stdio.h>
int Prime(int n){
    if(n==0 || n==1){
    return 1;
    }
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter a positive integer:\n");
    scanf("%d",&n);
    printf("The result is %d.",Prime(n));
    return 0;
}