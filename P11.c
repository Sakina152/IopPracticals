#include <stdio.h>
int main(){
    int totalsec,hr,min,sec;
    printf("Enter the total number of second:\n");
    scanf("%d",&totalsec);
    hr= totalsec/3600;
    totalsec= totalsec%3600;
    min=totalsec/60;
    sec=totalsec%60;
    printf("Time = %02d:%02d:%02d",hr,min,sec);
    return 0;
}