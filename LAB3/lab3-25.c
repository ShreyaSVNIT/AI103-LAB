// Program to print table of any number

#include <stdio.h>
int main() 
{
    int num, i = 1;
    printf("Enter number for which you want to print table: ");
    scanf("%d", &num);

    // Can be done using while loop as well
    for(i=1; i<=10; i++) {
        printf("%d * %d = %d \n", num, i , num * i);
    }
}