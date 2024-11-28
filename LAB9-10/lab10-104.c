#include <stdio.h>

enum Colors { RED, GREEN, BLUE, YELLOW, BLACK };

int main() {
    enum Colors color;
    printf("Enter a color (0 for RED, 1 for GREEN, 2 for BLUE, 3 for YELLOW, 4 for BLACK): ");
    scanf("%d", (int *)&color);

    switch (color) {
        case RED:
            printf("Hex Code: #FF0000\n");
            break;
        case GREEN:
            printf("Hex Code: #00FF00\n");
            break;
        case BLUE:
            printf("Hex Code: #0000FF\n");
            break;
        case YELLOW:
            printf("Hex Code: #FFFF00\n");
            break;
        case BLACK:
            printf("Hex Code: #000000\n");
            break;
        default:
            printf("Invalid color selection\n");
    }

    return 0;
}
