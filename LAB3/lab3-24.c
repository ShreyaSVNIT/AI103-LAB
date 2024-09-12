#include <stdio.h>
int main() {

    int n, x, Y = 0;
    printf("Enter the value of n and x: ");
    scanf("%d%d", &n, &x);

    if (n == 1) {
        Y = 1 + x;
    }

    else if (n == 2) {
        Y = 1 + (x/n);
    }

    else if (n == 3) {
        Y = 1 + (x * x * x);
    }

    else if (n>3 && n < 1) {
        Y = 1 + (n * x);
    }

    else {
        printf("Invalid value of n.");
    }
    
    printf("Value of Y(x, n) = %d", Y);
}