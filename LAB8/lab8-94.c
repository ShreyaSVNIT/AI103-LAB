#include <stdio.h>
#include <string.h>

int main() {
    char text[100], newtext[100]; 
    printf("Enter the string: ");
    gets(text);
    char *aptr = text;
    char *bptr = newtext;
    for (int i = 0; *(aptr + i) != '\0'; i++) {
        *(bptr + i) = *(aptr + strlen(text) - 1- i);
    }
    *(bptr + strlen(newtext)) = '\0';
    
    printf("Reversed string: ");
    puts(newtext);
}