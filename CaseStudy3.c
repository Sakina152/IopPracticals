#include <stdio.h>
int main(){
    int t,n,i,num,digit;
    printf("Enter the number of test cases:\n");
    scanf("%d",&t);
    for(i=1;i<=t;i++){
       scanf("%d",&n);
       num=n;
       int count=0;
       while(num!=0){ 
       digit=num%10;
       num/=10;
       if(n%digit==0){
        count++;
       }
     }
     printf("Number of positions where digit exactly divides %d : %d",n,count);
    }
    return 0;
}