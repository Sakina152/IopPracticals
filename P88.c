#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int *ptr=&arr[0];
    
    for (int i=0;i<5;i++){
        int arr_[5];
        arr_[i]=*(ptr+i);
        printf("%d\t",arr_[i]);
    }
}