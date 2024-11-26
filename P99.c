#include <stdio.h>
int main(){
    int count=0;
    FILE *fptr;
    fptr=fopen("P99.txt","r");
    char ch;
    ch=fgetc(fptr);
    while(ch != EOF){
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
         ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'){
            count++;
        }
        ch=fgetc(fptr);
    }
    printf("Number of Vowels present in File : %d",count);
    fclose(fptr);
}