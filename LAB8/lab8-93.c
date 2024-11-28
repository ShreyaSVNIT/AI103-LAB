#include <string.h>
#include <stdio.h>

int main() {
    char text[100];
    int count = 0;
    char *ptr = text;
    printf("Enter the string: ");
    gets(text);
    
    for (int i = 0; i < strlen(text); i++) {
        if (*(ptr + i) == ' ') {
            count++;
        }
    }
    printf("The number of words is %d", count + 1);
}
