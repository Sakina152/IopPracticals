#include <stdio.h>
int main(){
    float sec=31558150;
    float days,hours,min;

    days=sec/(24*3600);
    hours=sec/3600;
    min=sec/60;
    printf("The period of revolution 31558150 seconds, %f days ,%f hours, %f minutes ",days,hours,min);
    return 0;
}