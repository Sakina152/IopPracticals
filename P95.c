#include <stdio.h>
struct employee{
    int emp_number;
    char emp_name[50];
    float basicPay;
};
int main(){
    struct employee employ[50];
    struct employee *ptr;
    int n;
    printf("Enter The number of employees(max 50): ");
    scanf("%d",&n);
    if(n>50 || n<=0){
        printf("Cannot input more than 50 employees.\n");
        return 1;
    }
    for (int i=0;i<n;i++){
        printf("\nEnter details for employee %d:\n",i+1);
        printf("Employee Number: ");
        scanf("%d",&employ[i].emp_number);
        printf("Employee Name: ");
        scanf(" %[^\n]s",employ[i].emp_name);
        printf("basic Pay: ");
        scanf("%f",&employ[i].basicPay);
    }
    ptr=employ;

    printf("\nEnter List of Employees:\n");
    printf("-------------------------------------------------------------------------------------\n");
    printf("Emp no.\t\tName\t\t\tBasic Pay\n");
    printf("-------------------------------------------------------------------------------------\n");
    for(int i=0;i<n;i++){
        printf("%d\t\t%-20s\t%.2f\n",(ptr+i)->emp_number,(ptr+i)->emp_name,(ptr+i)->basicPay);
    }

    return 0;
}