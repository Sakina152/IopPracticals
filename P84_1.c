#include <stdio.h>
struct book{
    char title[100],author[100],publisher[100];
    int page;
    float price;
};

void readBook (struct book *ptr){
    printf("Enter Title of Book:\n");
    fgets(ptr->title,100,stdin);
    printf("Enter Author of Book:\n");
    fgets(ptr->author,100,stdin);
    printf("Enter Publisher of Book:\n");
    fgets(ptr->publisher,100,stdin);
    printf("Enter Number of Pages of Book:\n");
    scanf("%d",&ptr->page);
    printf("Enter Price of Book:\n");
    scanf("%f",&ptr->price);
    
}

int main(){
    struct book b1;
    struct book *ptr=&b1;
    readBook(ptr);
    printf("\nBook Details\n");
    printf("Title: %s",b1.title);
    printf("Author: %s",b1.author);
    printf("Publisher: %s",b1.publisher);
    printf("Pages: %d\n",b1.page);
    printf("Price: %f\n",b1.price);

    /*  OR
    printf("\nBook Details\n");
    printf("Title: %s",ptr->title);
    printf("Author: %s",ptr->author);
    printf("Publisher: %s",ptr->publisher);
    printf("Pages: %d\n",ptr->page);
    printf("Price: %f\n",ptr->price);
    */
    return 0;
}