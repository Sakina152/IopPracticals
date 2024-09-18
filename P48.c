#include <stdio.h>
int main(){
    int i,j,k,rows=5;
     for(i=0;i<rows;i++){
        for(j=4;j>=i;j--){
            printf(" ");}
            for(k=0;k<=i;k++){
                printf("%d",k+1);
            }
        
        printf("\n");
    }
    return 0;
}
