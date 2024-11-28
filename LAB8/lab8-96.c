#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char strings[n][100]; 
    char *ptrs[n];    

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        fflush(stdin);
        gets(strings[i]);
        ptrs[i] = strings[i]; 
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(ptrs[j], ptrs[j + 1]) > 0) {
                char *temp = ptrs[j];
                ptrs[j] = ptrs[j + 1];
                ptrs[j + 1] = temp;
            }
        }
    }

    printf("Strings in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", ptrs[i]);
    }

    return 0;
}
