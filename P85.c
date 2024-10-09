#include <stdio.h>
void checkVowel(char c){
    if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'|| c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U'){
        printf("%c is vowel.",c);
    }
    else{
        printf("%c is not a vowel.",c);
    }
}
int main(){
    char c;
    printf("Enter a character:\n");
    scanf("%c",&c);
    checkVowel(c);
}