#include <stdio.h>
int main(){
    int a,b,c,m;
    printf("Enter three numbers:");
    scanf("%d  %d  %d",&a,&b,&c);
    m=(a>=b && a>=c)? a:(b>=a && b>=c)? b:c;
    printf("The maximum number is: %d\n",m);
    return 0;
}