#include <stdio.h>

int main() {
    int arr[10], n, element, i, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = 1;
            printf("Element found at index %d\n", i);
            break;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}