#include <stdio.h>
int Max(int arr[],int n){
    int max=arr[0];
for(int i=1;i<n;i++){
   if(max<arr[i]){
    max=arr[i];
   }
}
return max;
}
int main()
{
    int n,max;
    printf("Enter the number of Elements in an array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Maximum element in array = %d",Max(arr,n));
     return 0;
}