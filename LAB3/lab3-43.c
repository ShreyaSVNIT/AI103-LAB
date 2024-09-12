#include <stdio.h>
int main() 
{
    float sales, comm;

    printf("Enter the sales amount: ");
    scanf("%f", &sales);

    if (sales<= 500) {
        comm = 0.05 * sales ;

    } else if (sales >500 && sales <= 2000) {
        comm = 35 + (sales - 500) * 0.1;

    } else if (sales > 2000 && sales <= 5000) {
        comm = 185 + (sales - 2000) * 0.12;

    } else {
        comm = 0.125 * sales;
    }

    printf("The commission amount is %.2f", comm);

}