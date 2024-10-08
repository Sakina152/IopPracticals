#include <stdio.h>
float fact(int n){
    float fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main()
{
    int n,r;
    printf("Calculating NCR (Note: n>=r is valid)\n");
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Enter r:\n");
    scanf("%d",&r);
    printf("NCR = %f",fact(n)/(fact(r)* fact(n-r)));

    return 0;
}