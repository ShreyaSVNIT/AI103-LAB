// Program to print sum of all odd and even numbers seperately

#include <stdio.h>
int main() {
    int sumOdd = 0, sumEven = 0, n, i = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    // Checking if numbers are even/odd
    while(i < n) {
        if (i % 2 == 0) {
            sumEven+= i;
        }
        else if (i % 2 == 1) {
            sumOdd+= i ;
        }
        else {
            printf("Invalid number");
        }
        i++;
    }

    printf("Sum of all odd numbers = %d\n", sumOdd);
    printf("Sum of all even numbers = %d\n", sumEven);
}