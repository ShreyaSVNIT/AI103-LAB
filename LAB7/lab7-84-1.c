#include <stdio.h>

struct Book {
    char title[100];
    char author[50];
    float price;
};

void readinfo(struct Book *book) {
    printf("Enter the book title: ");
    gets(book->title); 
    printf("Enter the author name: ");
    gets(book->author);
    printf("Enter the book price: ");
    scanf("%f", &book->price);
}

void displayinfo(struct Book *book) {
    printf("\nBook Information:\n");
    printf("Title: %s\n", book->title);
    printf("Author: %s\n", book->author);
    printf("Price: %.2f\n", book->price);
}

int main() {
    struct Book book; 

    readinfo(&book);
    displayinfo(&book);

    return 0;
}