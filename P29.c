#include <stdio.h>
int main(){
    int n,orgN,revN=0,r;//r=remainder revN=reversed number
    printf("Enter an integer:\n");
    scanf("%d",&n);
    orgN=n;
    while(n!=0){
        r=n%10;
        revN=revN*10+r;
        n/=10;
    }
    if(orgN==revN){
        printf("%d is palindrome.\n",orgN);
    }
    else{
        printf("%d is not a palindrome.\n",orgN);
    }
    return 0;

}