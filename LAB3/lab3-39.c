// Program to print 1/1! + 2/2! + 3/3!.... n/n!

#include <stdio.h>

int main() {
    int n;
    float sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact = 1;
        for (int j = 1; j <= i; j++) {
            fact = fact * j;
        }
        sum = sum + (i / fact);
    }

    printf("Sum of series: %.2f\n", sum);
    return 0;
}
