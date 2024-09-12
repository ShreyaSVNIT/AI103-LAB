#include <stdio.h>
int main()
{
  int a, b;

  printf("Enter a and b: \n");
  scanf("%d %d", &a, &b);

  a = a + b;
  b = a - b;
  a = a - b;

  printf("Swapped a is :%d\nSwapped b is:%d", a, b);
}
