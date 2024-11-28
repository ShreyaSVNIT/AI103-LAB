// Program to check if a number is armstrong

#include <stdio.h>
int main() {
    int num, sum = 0, digit, temp;

    printf("Enter number: ");
    scanf("%d", &num);
    temp = num;
    
    while (temp > 0) {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp/10;
    }
    if (num == sum) {
        printf("%d is an Armstrong number.", num);
    }
    else {
        printf("%d is not an Armstrong number.", num);
    }
}