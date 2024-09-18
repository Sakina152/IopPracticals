#include <stdio.h>
int main(){
     int i,j,space,rows=5;
    for(i=0;i<rows;i++){
        for(space=1;space<=rows-i;space++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("* ");//imp step leave space after * so it will give correct output or else it would be same asP48
        }
        printf("\n");
    }
    return 0;
}