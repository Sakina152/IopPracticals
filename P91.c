#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float sq,cube;
    printf("Enter n: ");
    scanf("%d",&n);
    int *ptr=&n;
    sq=pow(*ptr,2);
    cube=pow(*ptr,3);
    printf("Square of %d is %.0f.\n",n,sq);
    printf("Cube of %d is %.0f.\n",n,cube);
    return 0;
}