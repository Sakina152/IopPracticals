#include <stdio.h>
struct item{
    char item_name[50];
    int quantity;
    float price;
    float amount;
};
void calculate_amount(struct item *item){
    printf("Enter item name: ");
    scanf("%s",&item->item_name);
    printf("Enter Quantity: ");
    scanf("%d",&item->quantity);
    printf("Enter price: ");
    scanf("%f",&item->price);

    item->amount=item->quantity*item->price;
     
    printf("\nItem Details:\n");
    printf("Name:%s\n",&item->item_name);
    printf("Quantity: %d\n",item->quantity);
    printf("Price: %.2f\n",item->price);
    printf("Amount: %.2f\n",item->amount);
}
int main(){
    struct item item;
    calculate_amount(&item);
    return 0;
}