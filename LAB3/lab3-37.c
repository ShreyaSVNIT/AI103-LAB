// Program to print 2,4,6,8....,n

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}