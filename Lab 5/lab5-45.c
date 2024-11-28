#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int luckyNumber, guess;
    srand(time(0));
    luckyNumber = rand() % 100 + 1;

    for (int i = 0; i < 5; i++) {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);

        if (guess == luckyNumber) {
            printf("Congratulations! You guessed the lucky number!\n");
            break;
        } else if (guess < luckyNumber) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }
    }

    printf("The lucky number was %d\n", luckyNumber);
    return 0;
}
