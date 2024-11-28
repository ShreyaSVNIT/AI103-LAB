#include <stdio.h>

int main() {
    int A[100], B[100], C[200], nA, nB, i, j = 0, k = 0;

    printf("Enter number of elements in array A: ");
    scanf("%d", &nA);
    printf("Enter the elements of array A (sorted):\n");
    for (i = 0; i < nA; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter number of elements in array B: ");
    scanf("%d", &nB);
    printf("Enter the elements of array B (sorted):\n");
    for (i = 0; i < nB; i++) {
        scanf("%d", &B[i]);
    }

    // Merging A and B into C
    while (j < nA && k < nB) {
        if (A[j] < B[k]) {
            C[i++] = A[j++];
        } else {
            C[i++] = B[k++];
        }
    }

    while (j < nA) {
        C[i++] = A[j++];
    }

    while (k < nB) {
        C[i++] = B[k++];
    }

    printf("Merged array C:\n");
    for (i = 0; i < nA + nB; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}