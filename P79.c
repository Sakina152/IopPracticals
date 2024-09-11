#include <stdio.h>
void exchange(int x ,int y){
    int c;
    c=x;
    x=y;
    y=c;
    printf("After swapping x=%d ,y=%d\n",x,y);
}
int main(){
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    printf("Before swapping x=%d ,y=%d\n",x,y);
    exchange(x,y);
    return 0;
}
