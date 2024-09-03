#include <stdio.h>
int main(){
    int m,p,c,e,cm;
    printf("Enter the marks of maths(1-200):\n");
    scanf("%d",&m);
    printf("Enter the marks of physics(1-200):\n");
    scanf("%d",&p);
    printf("Enter the marks of chemistry(1-200):\n");
    scanf("%d",&c);
    printf("Enter the marks of entrance examination(1-100):\n");
    scanf("%d",&e);
    cm=(m/2)+(p/2)+(c/2)+e;
    printf("The cut off mark = %d",cm);

    return 0;

}