#include <stdio.h>
/*PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR
ELEMENT IN THE ARRAY.*/
int main()
{
    int occr=0,num,size;
    printf("Enter the number of elements in an array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element for which you want to know its occurence:\n");
    scanf("%d",&num);
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            occr++;
        }
    }
    printf("Occurence of %d is %d",num,occr);
    return 0;
}