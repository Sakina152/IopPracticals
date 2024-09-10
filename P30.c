#include <stdio.h>
int main(){
    int n,revn=0,r;//r=remainder revn=reversed number
    printf("Enter an integer:\n");
    scanf("%d",&n);

    while(n!=0){
        r=n%10;
        revn=revn*10+r;
        n/=10;
    }
    printf("Reversed number: %d",revn);
    return 0;

}
