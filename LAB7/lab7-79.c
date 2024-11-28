#include <stdio.h>

void swap(int a, int b);
int main()
{
    int a, b;
    printf("Enter the numbers (a & b) \n");
    scanf("%d%d", &a, &b);
    printf("Original Value of a = %d \n", a);
    printf("Original Value of b = %d \n", b);
    swap(a,b);
}

void swap(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("Swapped Value of a = %d \n", a);
    printf("Swapped Value of b = %d \n", b);
    
}