#include <stdio.h>

int main() {
    int arr[10], n, i;

    printf("Enter the number of elements in the sorted rotated array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pivot = -1; // Initialize pivot
    for (i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            pivot = arr[i];
            break;
        }
    }

    if (pivot != -1) {
        printf("Pivot element is %d\n", pivot);
    } else {
        printf("No pivot element found\n");
    }

    return 0;
}