#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a[2], *b[2], *c[2];
    for (int i = 0; i < 2;i++) {
        a[i] = (int*)calloc(2, sizeof(int));
        b[i] = (int*)calloc(2, sizeof(int));
        c[i] = (int*)calloc(2, sizeof(int));
    }

    printf("Enter elements of 2x2 matrix A:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", a[i] + j);
        }
    }
    printf("Enter elements of 2x2 matrix B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", b[i] + j);
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            *(c[i] + j) = 0;
            for (int k = 0; k < 2; k++) {
                *(c[i] + j) += *(a[i] + k) * *(b[k] + j);
            }
        }
    }
    printf("Elements of C:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d", *(c[i] + j));
        }
    }
}