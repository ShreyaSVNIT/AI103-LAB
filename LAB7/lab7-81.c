#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void main() {
    int n;
    printf("Enter a number \n");
    scanf("%d", &n);
    printf("%d", isPrime(n));
}
