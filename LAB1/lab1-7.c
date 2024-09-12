// area of triangle
#include <stdio.h>

int main()
{

  int base, height, area;

  printf("Enter base and height:\n");
  scanf("%d %d", &base, &height);

  area = (base * height) / 2;

  printf("Area with base %d and height %d is: %d", base, height, area);
}
