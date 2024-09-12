#include <stdio.h>

int main()
{
  int a, b, c;

  printf("Enter a and b\n");
  scanf("%d %d", &a, &b);

  // Switching variables
  c = a;
  a = b;
  b = c;

  printf("Swapped a is :%d\n Swapped b is:%d", a, b);

}
