#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, result = 0;

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            result = str1[i] - str2[i];
            break;
        }
        i++;
    }

    if (result == 0 && str1[i] == '\0' && str2[i] == '\0') {
        printf("Strings are equal.\n");
    } else if (result > 0 || (result == 0 && str1[i] != '\0')) {
        printf("First string is greater.\n");
    } else {
        printf("Second string is greater.\n");
    }

    return 0;
}
