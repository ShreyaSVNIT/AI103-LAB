#include <stdio.h>

int main() {
    FILE *fp;
    long pos;

    fp = fopen("lnmiitstudent.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fseek(fp, -5, 2);
    fseek(fp, -10, 1);  // Move to the 15th byte
    printf("%c", getc(fp));         // Get the current position What will be the output?

    fclose(fp);
    return 0;
}
