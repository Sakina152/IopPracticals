#include <stdio.h>
#include <string.h>
int main()
{
    int lengthWithSpace=0,lengthWithoutSpace=0;
    char str[100];
    char *ptr;
    printf("Enter a String: ");
    fgets(str,100,stdin);
    ptr=str;
    //Remove new line character by fgets
    while(*ptr !='\0'){
        if(*ptr=='\n'){
            *ptr='\0';
            break;
        }
        ptr++;
    }
    ptr=str;
    while(*ptr !='\0'){
        if(*ptr!=' '){
            lengthWithoutSpace++;
        }
        lengthWithSpace++;
        ptr++;
    }
    printf("Length With Spaces included = %d\n",lengthWithSpace);
    printf("Length With Spaces excluded = %d\n",lengthWithoutSpace);
    return 0;
}