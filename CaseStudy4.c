#include <stdio.h>
#include <string.h>
int main(){
    int N;
    printf("Enter the number of rocks:\n");
    scanf("%d",&N);
    int freq[26]={0};//Array to store frequency of each character('a' to 'z')
    printf("Enter composition of rocks:\n");
    for(int i=0;i<N;i++){
        char rock[100];
        scanf("%s",&rock);
        int present[26]={0};//Array to track characters in current rock
        for(int j=0;rock[j]!='\0';j++){
            int index=rock[j]-97;//Converting character to index (a=0,b=1,..) (ASCII value of 'a' is 97)
            present[index]=1;//Mark character present in the current  rock
        }
        for(int k=0;k<26;k++){
            if(present[k]){
                freq[k]++;//Updating overall frequency based on rock compostion.
            }
        }
    }
    //If freq=N means character present in all rocks,Thus GemElement.
    int gemElement=0;
    for(int l=0;l<26;l++){
        if(freq[l]==N){
            gemElement++;
        }
    }
    printf("Number of Gem Elements is/are: %d",gemElement);
    return 0;
}