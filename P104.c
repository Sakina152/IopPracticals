#include <stdio.h>
#include <string.h>
enum color{red,yellow,blue,green,white,black,pink,purple,orange};
int main(){
    char input[10];
    enum color color;
    printf("Enter the clor name(red,yellow,blue,green,white,black,pink,purple,orange): ");
    scanf("%s",input);
    if(strcmp(input,"red")==0){
        color=red;
    }
    else if(strcmp(input,"yellow")==0){
        color=yellow;
    }
    else if(strcmp(input,"blue")==0){
        color=blue;
    }
    else if(strcmp(input,"green")==0){
        color=green;
    }
    else if(strcmp(input,"white")==0){
        color=white;
    }
    else if(strcmp(input,"black")==0){
        color=black;
    }
    else if(strcmp(input,"pink")==0){
        color=pink;
    }
    else if(strcmp(input,"purple")==0){
        color=purple;
    }
    else if(strcmp(input,"orange")==0){
        color=orange;
    }
    else{
        printf("Invalid color name.\n");
        return 1;
    }
    switch(color){
        case red:printf("Hexadecimal code for red is #FF0000\n");
        break;
        case yellow:printf("Hexadecimal code for red is #FFFF00\n");
        break;
        case blue:printf("Hexadecimal code for red is #0000FF\n");
        break;
        case green:printf("Hexadecimal code for red is #00FF00\n");
        break;
        case white:printf("Hexadecimal code for red is #FFFFFF\n");
        break;
        case black:printf("Hexadecimal code for red is #000000\n");
        break;
        case pink:printf("Hexadecimal code for red is #FFC0CB\n");
        break;
        case purple:printf("Hexadecimal code for red is #800080\n");
        break;
        case orange:printf("Hexadecimal code for red is #FFA500\n");
    return 0;
 }
}
