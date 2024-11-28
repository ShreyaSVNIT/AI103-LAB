#include <stdio.h>

int main() {
    int arr[10], n, i, j, minIndex, temp;

    printf("Enter the no. of numbers: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }

    // Selection Sort algorithm
    for (i = 0; i < n-1; i++) {
        // Assume the current index as the minimum
        minIndex = i;

        // Find the minimum element in the remaining unsorted part
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    // Display the sorted array
    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
