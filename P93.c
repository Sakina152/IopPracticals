#include <stdio.h>
int countwords(char *str){
    int wordcount=0;
    int inword=0;
    while(*str){
        if(*str==' ' || *str=='\t' || *str=='\n'){
            inword=0;//not inside a word
        }
        else if(!inword){
            inword=1;//Starting a new word
            wordcount++;
        }
        str++;//Move to next character
    }
    return wordcount;
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    printf("The number of word in the string is : %d.",countwords(str));

    return 0;
}