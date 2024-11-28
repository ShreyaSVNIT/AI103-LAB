#include <stdio.h>

int main() 
{
    FILE *fp;
    int rollnum, totmarks, n;
    char name[50];
    scanf("%d", &n);
    fp = fopen("lnmiitstudent.txt", "w");
    printf("Rollnum Name Marks");
    for (int i = 0; i < n; i++) {
        fscanf(stdin, "%d %s %d", &rollnum, name, &totmarks );
        fprintf(fp, "%d %s %d\n", rollnum, name, totmarks);
    }
    fclose(fp);
    fprintf(stdout, "\n\n");

}