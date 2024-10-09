#include <stdio.h>
void displayBook(char title[],char author[],char publisher[],int page,float price){
    printf("\nBook Details\n");
    printf("Title: %s",title);
    printf("Author: %s",author);
    printf("Publisher: %s",publisher);
    printf("Pages: %d\n",page);
    printf("Price: %f\n",price);
}
void readBook(char title[],char author[],char publisher[],int page,float price){
    printf("Enter Title of Book:\n");
    fgets(title,100,stdin);
    printf("Enter Author of Book:\n");
    fgets(author,100,stdin);
    printf("Enter Publisher of Book:\n");
    fgets(publisher,100,stdin);
    printf("Enter Number of Pages of Book:\n");
    scanf("%d",&page);
    printf("Enter Price of Book:\n");
    scanf("%f",&price);
    displayBook(title,author,publisher,page,price);
}

int main(){
    char title[100],author[100],publisher[100];
    int page;
    float price;
    readBook(title,author,publisher,page,price);
    
    return 0;
}
