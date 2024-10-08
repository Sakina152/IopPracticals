#include <stdio.h>
int main(){
    int n,max,secondmax;
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    if(n<2){
        printf("Atleast two numbers are required.\n");
        return 1;
    }
    int arr[n];
    printf("Enter number 1: ");
    scanf("%d",&arr[0]);
    max=arr[0];

    secondmax=-2147483648;

    for(int i=1;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
        if (arr[i]>max){
            secondmax=max;
            max=arr[i];
        }
        else if(arr[i]>secondmax && arr[i]!=max){
            secondmax=arr[i];
        }
    }
    printf("Maximum: %d\n",max);
    printf("Second maximum: %d\n",secondmax);
    return 0;


}