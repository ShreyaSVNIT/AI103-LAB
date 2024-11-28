#include <stdio.h>

int main() {
    int number, square, cube;
    int *ptr = &number;
    printf("Enter the number: ");
    scanf("%d", &number);

    square = *ptr * *ptr;
    cube = *ptr * *ptr * *ptr;
    printf("square = %d, cube = %d", square, cube);
}