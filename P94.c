#include <stdio.h>
int main(){
    char arr[]="SVNITJAVA";
    char *ptr=&arr[0];
    
    for (int i=0;i<9;i++){
        char arr_[9];
        arr_[i]=*(ptr+9-i-1);
        printf("%c",arr_[i]);
    }
}