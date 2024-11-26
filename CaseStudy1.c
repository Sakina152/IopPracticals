#include <stdio.h>
#include <string.h>
int main () {
    int t;
    char w[100];
    char buffer;
    int check=0;
    printf("How Many Words will you Input: ");
    scanf("%d", &t);
    getchar();//To consume the new line left by scanf
    for (int i=1; i<=t; i++) {
        printf("Enter The Word:");
        fgets(w,100,stdin);
        int d = strlen(w);
        
        if (d == 1) {
            printf("No Answer.\n");
        }
        else {
            for (int i=1; i<d-1; i++) {
                if (w[d-i-2] < w[d-i-1]) {
                    buffer = w[d-i-1];
                    w[d-i-1] = w[d-i-2];
                    w[d-i-2] = buffer;
                    check++;
                    break;
                }
            }
        if (check == 0) {
            printf("No Answer.\n");
        }
        else {
        puts(w);
        }
        check = 0;
        }
    }
}