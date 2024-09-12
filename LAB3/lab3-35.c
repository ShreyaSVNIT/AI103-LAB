// Program to print single digit sum

#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;

        if (n == 0 && sum > 9) {
            n = sum;
            sum = 0;
        }
    }

    printf("Single digit sum: %d\n", sum);
    return 0;
}
