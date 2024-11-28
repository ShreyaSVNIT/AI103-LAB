#include <stdio.h>

int main() {
    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);

    int arr[n];  // Declare the array after reading n
    int *ptr = arr;

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));  // Read values into the array
    }

    int max = *(ptr + 0);  // Initialize max with the first element
    for (int i = 1; i < n; i++) {  // Start from the second element
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("Max value = %d\n", max);

    return 0;
}
