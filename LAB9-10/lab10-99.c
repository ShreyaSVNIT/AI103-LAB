#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *fp;
    char filename[100];
    char ch;
    int vowel_count = 0;

    // Open the file in read mode
    fp = fopen("lnmiitstudent.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1; // Exit if file can't be opened
    }


    while (feof(fp) == 0) {
        ch = fgetc(fp);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel_count++;
        }
    }

    // Close the file
    fclose(fp);

    // Output the result
    printf("Number of vowels in the file: %d\n", vowel_count);

    return 0;
}
