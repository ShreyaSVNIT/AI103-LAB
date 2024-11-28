#include <stdio.h>

void readBook(char title[], char author[], int pages, float price) {
    printf("Enter title: ");
    scanf("%s", title);
    printf("Enter author: ");
    scanf("%s", author);
    printf("Enter number of pages: ");
    scanf("%d", &pages);
    printf("Enter price: ");
    scanf("%f", &price);
}

void displayBook(char title[], char author[], int pages, float price) {
    printf("\nBook Information:\n");
    printf("Title: %s\n", title);
    printf("Author: %s\n", author);
    printf("Pages: %d\n", pages);
    printf("Price: %.2f\n", price);
}

int main() {
    char title[50];
    char author[50];
    int pages;
    float price;

    readBook(title, author, pages, price);
    displayBook(title, author, pages, price);

    return 0;
}
