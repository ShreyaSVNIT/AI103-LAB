#include <stdio.h>
int main(void) {
  int grossSalary, basicSalary, tax, allowance;

  // Inputing salary information
  printf("Enter your Information: \n");

  printf("Basic Salary\n");
  scanf("%d", &basicSalary);

  printf("TAX\n>>>");
  scanf("%d", &tax);

  printf("Other Allowances\n");
  scanf("%d", &allowance);

  // Calculating salary
  grossSalary = basicSalary - tax + allowance;
  printf("Your gross salary is %d", grossSalary);
  return 0;
}
