#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<6;i++){
        for(j=0;j<5;j++){
            if(j==i-1){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}