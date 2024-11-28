#include <stdio.h>

int main() {
    int n, num, max, min;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter a number: ");
    scanf("%d", &num);
    max = min = num;  // Set first number as both max and min

    for (int i = 1; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }

        if (num < min) {
            min = num;
        }
    }

    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}

