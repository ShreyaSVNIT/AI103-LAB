#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i = 0, j = 0, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (i = length - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';  // Null-terminate the reversed string

    printf("Reversed string: %s\n", rev);
    return 0;
}
