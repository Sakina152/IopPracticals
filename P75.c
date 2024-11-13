#include <stdio.h>
int main () {
    int roll[10];
    int sub1[10];
    int sub2[10];
    int sub3[10];
    int total[10];
    int max=0, max1=0,max2=0,max3=0;
    int n,m,o,p;
    for (int i=0; i<10; i++) {
        printf("Enter the Details of Student %d \n", i+1);
        printf("Enter the Roll No. of The Student %d: ", i+1);
        scanf("%d", &roll[i]);
        printf("Enter the Marks of Subject 1: ");
        scanf("%d", &sub1[i]);
        if (sub1[i] > max1) {
            max1 = sub1[i];
            m = i;
        }
        printf("Enter the Marks of Subject 2: ");
        scanf("%d", &sub2[i]);
        if (sub2[i] > max1) {
            max2 = sub2[i];
            o = i;
        }
        printf("Enter the Marks of Subject 3: ");
        scanf("%d", &sub3[i]);
        if (sub3[i] > max1) {
            max3 = sub3[i];
            p = i;
        }
        total[i] = sub1[i] + sub2[i] +sub3[i];
        printf("The Total Marks of Student %d are: %d\n", i+1, total[i]);
        if (total[i] > max) {
            max = total[i];
            n = i;
        }
    }
    printf("The Highest Marks Scored By the Student in Subject 1 are: %d\n", sub1[m]);
    printf("And the Roll Number is: %d\n", roll[m]);
    printf("\n");
    printf("The Highest Marks Scored By the Student in Subject 2 are: %d\n", sub2[o]);
    printf("And the Roll Number is: %d\n", roll[o]);
    printf("\n");
    printf("The Highest Marks Scored By the Student in Subject 3 are: %d\n", sub3[p]);
    printf("And the Roll Number is: %d\n", roll[p]);
    printf("\n");
    printf("The Highest Marks Scored By the Student are: %d\n", total[n]);
    printf("And the Roll Number is: %d",roll[n]);

}