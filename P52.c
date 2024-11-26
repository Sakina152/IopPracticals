#include <stdio.h>
int main(){
     int i,j,space,rows=4;
    for(i=0;i<rows;i++){
        for(space=rows-1;space>=i;space--){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("%d",j+1);//imp step leave space after * so it will give correct output or else it would be same asP48
        }
        for(int k=i;k>0;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}