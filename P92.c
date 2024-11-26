#include <stdio.h>
int main(){
    int n;
    int *ptr;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter numbers: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    int max=*ptr;
    for(int i=1;i<n;i++){
        if(max < *(ptr+i)){
            max=*(ptr+i);
        }
    }
    printf("The biggest of given list of %d integers is : %d.",n,max);
    return 0;
}