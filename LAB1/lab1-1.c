#include <stdio.h>

int main()
{
  int principal, rate, time, SI;

  printf("Enter the principal amount: ");
  scanf("%d", &principal);

  printf("Enter the annual interest rate (in percentage): ");
  scanf("%d", &rate);

  printf("Enter the time period (in years): ");
  scanf("%d", &time);

  SI = (principal * rate * time) / 100;

  printf("Simple Interest = %d", SI);

  return 0;
}
