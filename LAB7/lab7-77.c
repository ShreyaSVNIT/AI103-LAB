// Function to check if a number is palindrome or not

#include <stdio.h>

void palindrome(int n);
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    palindrome(n);
}

void palindrome(int n) {
    int original = n, remainder, reversed = 0;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    if (original == reversed) {
        printf("%d is a palindrome number", original);
    }
    else {
        printf("%d is not palindrome number", original);
    }
    
}
