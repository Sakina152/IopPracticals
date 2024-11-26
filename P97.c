#include <stdio.h>
int countVowels(char *str){
    int count=0;
    while(*str !='\0'){
    if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' ||
     *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U'){
        count++;
    }
    str++;
  }
  return count;
}
int main(){
    char str[100];
    printf("Enter a String : ");
    fgets(str,100,stdin);
    printf("The number of Vowels in the string is : %d.",countVowels(str));
    return 0;
}