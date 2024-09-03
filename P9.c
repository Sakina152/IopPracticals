#include <stdio.h>
int main(){
    int hours,min,sec,totalsec;
    printf("Enter time (hr,min,sec): \n");
    scanf("%d: %d: %d",&hours,&min,&sec);
    totalsec=(hours*3600)+(min*60)+sec;
    printf("Total time in seconds = %d\n",totalsec);

    return 0;
}