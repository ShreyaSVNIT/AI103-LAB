#include <stdio.h>

int main() {
    int arr[100], n, element, count = 0, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find occurrences: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    printf("Element %d occurred %d times\n", element, count);

    return 0;
}