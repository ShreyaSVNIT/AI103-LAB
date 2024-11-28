#include <stdio.h>

int main() {
    int i, a[10], b[10], sum[10];

    for (i = 0; i < 10; i++) {
        printf("Enter value for array a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("Enter value for array b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 10; i++) {
        sum[i] = a[i] + b[i];
    }

    printf("Sum of corresponding elements of arrays a and b:\n");
    for (i = 0; i < 10; i++) {
        printf("sum[%d] = %d\n", i, sum[i]);
    }

    return 0;
}
