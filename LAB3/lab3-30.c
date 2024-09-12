// Program to find the reverse of a number

#include <stdio.h>
int main() {
    int num, reverse = 0, digit, temp;

    printf("Enter number: ");
    scanf("%d", &num);
    temp = num;

    // Reversing and storing the number
    while (temp > 0) {
        digit = temp % 10;
        reverse = (reverse * 10) + digit;
        temp = temp/10;
    }

    printf("Reverse of %d = %d", num, reverse);
}