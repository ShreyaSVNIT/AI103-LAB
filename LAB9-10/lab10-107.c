#include <stdio.h>
#include <math.h>

// Function to flip the last N digits
int flip(int num, int n) {
    int divisor = pow(10, n);         // Divisor to separate last N digits
    int lastNDigits = num % divisor; // Extract last N digits
    int remainingNum = num / divisor; // Extract the remaining part of the number
    
    // Reverse the last N digits
    int reversed = 0;
    while (lastNDigits > 0) {
        reversed = reversed * 10 + (lastNDigits % 10);
        lastNDigits /= 10;
    }
    
    // Combine the reversed part with the remaining part
    int result = remainingNum * divisor + reversed;
    return result;
}

int main() {
    int num, n;
    printf("Enter a number and the number of last digits to flip: ");
    scanf("%d %d", &num, &n);

    int result = flip(num, n); // Call the flip function
    printf("Result after flipping: %d\n", result);

    return 0;
}
