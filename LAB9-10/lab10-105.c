#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i));    // Swap characters
            permute(str, l + 1, r);       // Recursion for the rest of the string
            swap((str + l), (str + i));    // Backtrack to the original string
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);
    printf("The permutations of the string are:\n");
    permute(str, 0, n - 1);

    return 0;
}
