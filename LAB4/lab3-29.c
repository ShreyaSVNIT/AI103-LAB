// Program to check if a number is palindrome

#include <stdio.h>
int main() {
    int num, pal = 0, digit, temp;

    printf("Enter number: ");
    scanf("%d", &num);
    temp = num;

    // Reversing and storing the number
    while (temp > 0) {
        digit = temp % 10;
        pal = (pal * 10) + digit;
        temp = temp/10;
    }

    // Checking if Palindrome 
    if (num == pal) {
        printf("%d is a Palindrome number.", num);
    }
    else {
        printf("%d is not a Palindrome number.", num);
    }
}