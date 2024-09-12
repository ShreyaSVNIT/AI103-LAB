// Program to find max and second max of a number

#include <stdio.h>

int main() {
    int n, num, max = 0, secondMax = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter a number: ");
    scanf("%d", &num);
    max = num;  

    for (int i = 1; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > max) {
            secondMax = max;
            max = num;
        } else if (num > secondMax) {
            secondMax = num;
        }
    }

    printf("Max: %d, Second Max: %d\n", max, secondMax);
    return 0;
}
