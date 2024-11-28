// Fibonacci Series

#include <stdio.h>

void fibonacci(int n);

void fibonacci(int n) {
    int a = 0, b = 1, next;

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    fibonacci(5);
    fibonacci(10);
    fibonacci(15);
    return 0;
}
