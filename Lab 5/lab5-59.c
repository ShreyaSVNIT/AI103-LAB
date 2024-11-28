#include <stdio.h>
int main() {

    int i, a[10], b[10], temp;
    
    for (i = 0; i < 10; i++) 
    {
        printf("Enter values of array a: ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++) 
    {
        printf("enter values of array b: ");
        scanf("%d", &b[i]);
    }
    for (i = 0;i < 10; i++) 
    {
        a[i] = a[i] + b[i];
        b[i] = a[i] - b[i];
        a[i] = a[i] - b[i];
    }
    
    printf("Array A: ");
    for (i = 0; i < 10; i++) 
    {
        printf("%d", a[i]);
    }

    printf("Array B: ");
    for (i = 0; i < 10; i++) 
    {
        printf("%d", b[i]);
    }
}