#include <stdio.h>
#include <string.h>

int stringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char text[100];
    printf("Enter a line of text: ");
    gets(text);

    // Remove newline character
    if (text[stringLength(text) - 1] == '\n') {
        text[stringLength(text) - 1] = '\0';
    }

    printf("Length of string: %d\n", stringLength(text));
    return 0;
}
