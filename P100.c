#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("LMNIITSTUDENT.JAVA","w");
    char name[100];
    int roll,n;
    float totalmarks;
    printf("Enter the Number of students: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
    printf("Enter Name:\n");
    scanf("%s",&name);
    printf("Enter Roll No:\n");
    scanf("%d",&roll);
    printf("Enter Total Marks:\n");
    scanf("%f",&totalmarks);
    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%d\t",roll);
    fprintf(fptr,"%f\t\n",totalmarks);
    }

    fclose(fptr);
    return 0;
}

   