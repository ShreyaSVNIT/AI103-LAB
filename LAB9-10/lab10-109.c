#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Initial value of num: %d\n", num);
    *ptr = 25;  // Modify the value using the pointer
    printf("Modified value of num: %d\n", num);

    return 0;
}
