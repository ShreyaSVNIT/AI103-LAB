#include <stdio.h>

int main() {
    int n, a = 0, b = 1, sum;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d", a, b);

    for (int i = 3; i <= n; i++) {
        sum = a + b;
        printf(" %d", sum);
        a = b;
        b = sum;
    }

    printf("\n");
    return 0;
}