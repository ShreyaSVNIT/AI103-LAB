#include <stdio.h>
int main() {

    int num[10], oddCount = 0, count = 0;

    for (int i = 0; i< 10; i++) {
        printf("Enter a value: ");
        scanf("%d", &num[i]);
        if (num[i]%2 != 0) {
            oddCount+=1;
        }
        count+=1;
    }

    printf("The count of odd numbers = %d \n", oddCount);
    printf("The count of all numbers = %d \n", count);

}