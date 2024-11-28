#include <stdio.h>
int main() {

    int n, a[n], max, secondMax;

    printf("Enter no. of numbers: ");
    scanf("%d", &n);

    for (int i = 0; i< n; i++) {
        printf("Enter a value: \n");
        scanf("%d", &a[i]);
    }

    max = a[0];
    secondMax = a[0];

    for (int i = 0; i < n; i ++ ) {
        if (a[i] > max) {
            secondMax = max;
            max = a[i];
        }
    }

    printf("The maximum number = %d", max);
    printf("The minimum number = %d", secondMax);
}