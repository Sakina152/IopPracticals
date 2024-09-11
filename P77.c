#include <stdio.h>
int Palindrome(int n){
    int orgN,revN=0,r;
    orgN=n;
    while(n!=0){
        r=n%10;
        revN=revN*10+r;
        n/=10;
    }
    if(orgN==revN){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    if(Palindrome(n)){
        printf("%d is palindrome.\n",n);
    }
    else{
        printf("%d is not a palindrome.\n",n);
    }
    return 0;

}