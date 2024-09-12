#include <stdio.h>

int main()
{
  float celsius, farhenheit;

  printf("Enter temperature in fahrenheit\n");
  scanf("%f", &farhenheit);

  celsius = (farhenheit - 32) * 5 / 9;
  printf("Temperature in celsius is %f", celsius);
}
