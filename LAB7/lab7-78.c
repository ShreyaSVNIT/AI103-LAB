// Function to check if a number is armstrong or not

#include <stdio.h>

void armstrong(int n);
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    armstrong(n);
}

void armstrong(int n) {
    int original = n, remainder, sum = 0;
    while (n != 0) {
        remainder = n % 10;
        sum += (remainder * remainder * remainder);
        n /= 10;
    }
    
    if (original == sum) {
        printf("%d is an armstrong number", original);
    }
    else {
        printf("%d is not an armstrong number", original);
    }
    
}