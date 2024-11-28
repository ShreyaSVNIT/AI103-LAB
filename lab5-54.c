#include <stdio.h>

int main() {
    int num[10], sum = 0, i;
    
    for (i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }

    printf("Sum = %d", sum);
    return 0;
}