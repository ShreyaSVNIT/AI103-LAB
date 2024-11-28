#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int char_count = 0, word_count = 0, line_count = 0;


    // Open the file in read mode
    fp = fopen("lnmiitstudent.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        char_count++; // Count every character

        // Check for word boundaries
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            word_count++;
        }

        // Check for line boundaries
        if (ch == '\n') {
            line_count++;
        }
    }

    // Account for the last word if the file doesn't end with a space or newline
    if (char_count > 0 && ch != ' ' && ch != '\n') {
        word_count++;
    }

    // Account for the last line if the file doesn't end with a newline
    if (char_count > 0 && ch != '\n') {
        line_count++;
    }

    fclose(fp);

    // Print the counts
    printf("Characters: %d\n", char_count);
    printf("Words: %d\n", word_count);
    printf("Lines: %d\n", line_count);

    return 0;
}
