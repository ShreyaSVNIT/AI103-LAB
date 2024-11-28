#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Move to the end of the first string
    while (str1[i] != '\0') {
        i++;
    }

    // Append the second string
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';  // Null-terminate the resulting string

    printf("Concatenated string: %s\n", str1);
    return 0;
}
