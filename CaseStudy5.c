#include <stdio.h>
#include <math.h>
int main(){
    int t,n,i,x,y,a,b;
    printf("Enter the number of test cases(1<=t<=10^5):\n");
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        a=5*n*n+4; //if and only if 'a' or 'b' is perfect square then number(n) is said to be fibo
        b=5*n*n-4;
        x=sqrt(a);
        y=sqrt(b);
        if ((x*x)==a|| (y*y)==b){
            printf("IsFibo\n");
        }
        else{
            printf("IsNotFibo\n");
        }
    }
    return 0;
}