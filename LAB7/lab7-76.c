#include <stdio.h>

void number(int n);
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    number(n);
}

void number(int n) {
    if (n%2==0) {
        printf("Even number");
    }
    else {
        printf("odd number");
    }
}
