#include <stdio.h>

int main() {
    int rollNo[10], marks[10][3], total[10] = {0}, highestMarks[3] = {0}, highestRollNo[3] = {0};
    int i, j, highestTotal = 0, highestTotalRollNo = 0;

    // Input Roll No and Marks
    for (i = 0; i < 10; i++) {
        printf("Enter Roll No for student %d: ", i + 1);
        scanf("%d", &rollNo[i]);
        printf("Enter marks for 3 subjects for student %d:\n", rollNo[i]);
        for (j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
            if (marks[i][j] > highestMarks[j]) {
                highestMarks[j] = marks[i][j];
                highestRollNo[j] = rollNo[i];
            }
        }
    }

    // Finding highest total marks and corresponding roll no
    for (i = 0; i < 10; i++) {
        if (total[i] > highestTotal) {
            highestTotal = total[i];
            highestTotalRollNo = rollNo[i];
        }
    }

    // Output results
    printf("\nTotal marks for each student:\n");
    for (i = 0; i < 10; i++) {
        printf("Roll No %d: Total Marks = %d\n", rollNo[i], total[i]);
    }

    printf("\nHighest marks in each subject:\n");
    for (j = 0; j < 3; j++) {
        printf("Subject %d: Highest Marks = %d by Roll No %d\n", j + 1, highestMarks[j], highestRollNo[j]);
    }

    printf("Student with highest total marks: Roll No %d with %d marks\n", highestTotalRollNo, highestTotal);

    return 0;
}