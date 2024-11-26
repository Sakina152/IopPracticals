#include <stdio.h>
int strcopy(char str1[], char str2[], int n) {
    char cpy1[n];
    char cpy2[n];
    // Copying the First String.
    for (int i=0; str1[i] != '\0'; i++) {
        cpy1[i] = str1[i];
    }
    // Copying the Second String.
    for (int i=0; str2[i] != '\0'; i++) {
        cpy2[i] = str2[i];
    }
    printf("The Copied Strings are: \n");
    puts(str2);
    puts(str1);
    printf("\n");
}

int strcompare (char str1[], char str2[], int n) {
    int count=0; //to check if string is same or not;
    for (int i=0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] > str2[i]) {
            printf("%d\n", 1);
            count++;
            break;
        }
        else if (str1[i] < str2[i]) {
            printf("%d\n", -1);
            count++;
            break;
        }
        else {
            continue;
        }
    }
    if (count == 0) {
        printf("%d", count);
    }
    printf("\n");
}

int strconcatinate (char str1[], char str2[], int n) {
    int d;
    char cont[200];
    for (int i=0; str1[i] != '\0'; i++) {
        cont[i] = str1[i];
        d = i;
    }
    for (int i=d+1, j=0 ; str2[j] != '\0'; i++, j++) {
        cont[i] = str2[j];
        d = i;
    }
    cont[d+1] = '\0';
    printf("The New String is: ");
    puts(cont);
    printf("\n");
}

int strreverse (char str1[], char str2[], int n) {
    // Finding lenght of string.
    int d1=0;
    int d2=0;
    // For 1st String.
    for (int i=0; str1[i] != '\0'; i++) {
        d1++;
    }
    // For 2nd String.
    for (int i=0; str2[i] != '\0'; i++) {
        d2++;
    }
    // Reversing First String.
    for (int i=0; i < (d1)/2; i++ ) {
        char fv = str1[i];
        int sv = str1[d1-i-1];
        str1[i] = sv;
        str1[d1-i-1] = fv;
    }
    // Reversing Second String
    for (int i=0; i<(d2)/2; i++) {
        char fv = str2[i];
        int sv = str2[d2-i-1];
        str2[i] = sv;
        str2[d2-i-1] = fv;
    }
    puts(str1);
    puts(str2);
}
int main () {
    char str1[100];
    char str2[100];
    printf("Enter the First String: ");
    fgets(str1, 100, stdin);
    // Removing New Line Character.
    char *ptr;
    ptr = str1;
    while ((*ptr) != '\0') {
        if ((*ptr) == '\n') {
            (*ptr) = '\0'; 
        }
        ptr++; 
    }
    printf("Enter the Second String: ");
    fgets(str2, 100, stdin);
    ptr = str2;
    while ((*ptr) != '\0') {
        if ((*ptr) == '\n') {
            (*ptr) = '\0'; 
        }
        ptr++; 
    }
    strcopy(str1, str2, 100);
    strcompare(str1, str2, 100);
    strconcatinate(str1, str2, 100);
    strreverse(str1,str2,100);
}
