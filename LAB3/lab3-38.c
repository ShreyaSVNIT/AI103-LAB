// Program to print 1, 4, 9, 16....n

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }

    printf("\n");
    return 0;
}