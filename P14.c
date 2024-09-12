#include <stdio.h>
int main(){
    char ch;
    printf("Enter character :\n");
    scanf("%c",&ch);//or use ch=getchar();
    if(ch>='A' && ch<='Z'){
        printf("Uppercase");

    }
    else if (ch>='a' && ch<='z'){
        printf("Lowercase");
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    else{
        printf("Special symbol");
    }
    return 0;
}
