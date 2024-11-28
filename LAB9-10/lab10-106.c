#include <stdio.h>

struct Item {
    char item_name[50];
    int quantity;
    float price;
    float amount;
};

int amount(struct Item item) {
    printf("Enter item name: ");
    scanf("%s", item.item_name); // Reading the item name

    printf("Enter quantity: ");
    scanf("%d", &item.quantity); // Reading quantity

    printf("Enter price: ");
    scanf("%f", &item.price);

    item.amount = item.quantity * item.price;
    printf("Total amount: %.2f", item.amount);
}

int main() {
    struct Item my_item;
    amount(my_item);
}