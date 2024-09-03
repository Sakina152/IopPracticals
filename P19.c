#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    (ch>='a' && ch<='z')? printf("Lowercase letter\n"):printf("Not a lowercase letter.\n");

    return 0;
}