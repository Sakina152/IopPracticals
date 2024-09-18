#include <stdio.h>
int main(){
     int i,j,k,l,space2,space,rows=7;
    for(i=0;i<rows;i=i+2){
        for(space=1;space<=rows-i;space++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("* ");//imp step leave space after * so it will give correct output or else it would be same asP48
        }
        printf("\n");
    }
    
    
}