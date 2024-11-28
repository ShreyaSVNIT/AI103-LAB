#include <stdio.h>

int main() {
    int votes[10], count[6] = {0}, n, i, spoilt = 0;

    printf("Enter the number of ballots: ");
    scanf("%d", &n);

    printf("Enter the votes (1 to 5):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &votes[i]);
        if (votes[i] >= 1 && votes[i] <= 5) {
            count[votes[i]]++;
        } else {
            spoilt++;
        }
    }

    printf("Vote counts:\n");
    for (i = 1; i <= 5; i++) {
        printf("Candidate %d: %d votes\n", i, count[i]);
    }
    printf("Spoilt ballots: %d\n", spoilt);

    return 0;
}