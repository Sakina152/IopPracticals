#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("P102.txt","r");
    char ch;
    ch=fgetc(fptr);
    int countCh=0,countWords=0,countLines=0,inWord=0;
    while(ch != EOF){
        if(ch!=' ' && ch!='\t' && ch!='\n'){
            countCh++;
        }
        if(ch==' ' || ch=='\t' || ch=='\n'){
            inWord=0;//not inside a word
            if(ch=='\n'){
                countLines++;
            }
        }
        else if(!inWord){
            inWord=1;//Starting a new word
            countWords++;
        }
        ch=fgetc(fptr);
    }
    printf("Number of Characters: %d\n",countCh);
    printf("Number of Words: %d\n",countWords);
    printf("Number of Lines: %d\n",countLines);

    fclose(fptr);
    return 0;
}