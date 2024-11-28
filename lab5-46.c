#include <stdio.h>

int main() {
    double headCircumference;
    double hatSizesUS[] = {6.5, 6.625, 6.75, 6.875, 7.0, 7.125, 7.25, 7.375, 7.5, 7.625, 7.75, 7.875};
    double headRanges[] = {20.5, 20.875, 21.25, 21.625, 22.0, 22.375, 22.75, 23.125, 23.5, 23.875, 24.25, 24.625};
    int sizeCount = 12;

    printf("Enter your head circumference in inches: ");
    scanf("%lf", &headCircumference);

    for (int i = 0; i < sizeCount; i++) {
        if (headCircumference <= headRanges[i]) {
            printf("Your hat size is %.3f in the US.\n", hatSizesUS[i]);
            break;
        }
    }

    return 0;
}
