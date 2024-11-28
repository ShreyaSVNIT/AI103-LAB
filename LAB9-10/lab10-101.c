#include <stdio.h>

int main() 
{
    FILE *fp;
    int rollnum, totmarks, n;
    char name[50];

    // Open the file in append mode
    fp = fopen("lnmiitstudent.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if file cannot be opened
    }

    // Ask the user for the number of students to append
    printf("Enter the number of students to append: ");
    scanf("%d", &n);

    // Input and append details for each student
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &rollnum);
        fflush(stdin);
        printf("Name: ");
        gets(name);// To accept names with spaces
        printf("Total Marks: ");
        scanf("%d", &totmarks);

        // Write the details to the file
        fprintf(fp, "%d %s %d\n", rollnum, name, totmarks);
    }

    // Close the file
    fclose(fp);

    printf("Student details successfully appended to lnmiitstudent.java\n");

    return 0;
}
