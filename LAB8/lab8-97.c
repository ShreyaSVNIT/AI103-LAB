#include <stdio.h>
#include <ctype.h>

int main() {
    char string[100];
    int count = 0;
    char *ptr = string;

    printf("Enter the string: ");
    gets(string);

    for (int i = 0; *(ptr + i) != '\0'; i++) {
        char ch = tolower(*(ptr+i)); // Convert the character to lowercase.
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("Vowels = %d\n", count);

    return 0;
}
