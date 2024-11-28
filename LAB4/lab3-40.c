#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers (negative number to stop): ");
    
    while (1) {
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        sum = sum + num;
    }

    printf("Sum: %d\n", sum);
    return 0;
}

