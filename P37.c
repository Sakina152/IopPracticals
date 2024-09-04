#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    for(int i=2;i<=n;i=i+2){
        printf("%d\n",i);
    }
}