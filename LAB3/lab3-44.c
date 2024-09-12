#include <stdio.h>

int main() 
{
    float amount, used;
    printf("Enter consumption in unit: ");
    scanf("%f", &used);
    
    if (used >= 0 && used <= 200) {
        amount = 0.5 * used;

    } else if (used >= 210 && used <= 400) {
        amount = 100 + 0.65 * (used - 200);

    } else if (used >= 401 && used <= 600) {
        amount = 230 + 0.8 * (used - 400);

    } else {
        amount = 425 + 125 * (used - 600);
    }

    printf("Amount paid by customer = %.2f", amount);
}