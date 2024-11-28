#include <stdio.h>
int main() {

    int num[10], posCount = 0, negCount = 0, zeroCount = 0;

    for (int i = 0; i< 10; i++) {
        printf("Enter a value: ");
        scanf("%d", &num[i]);
        if (num[i] > 0) {
            posCount+=1;
        }

        else if (num[i] < 0) {
            negCount+=1;
        }

        else {
            zeroCount+=1;
        }
    }

    printf("The count of positive numbers = %d \n", posCount);
    printf("The count of negative numbers = %d \n", negCount);
    printf("The count of zeroes = %d \n", zeroCount);

}