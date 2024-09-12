#include <stdio.h>

int main() {
  int math, sci, eng, soc, french, total;
  float percentage;

  // Inputing marks of student
  printf("Enter your subjects marks here to calcuate percentage\n");

  printf("Please enter your maths marks\n");
  scanf("%d", &math);

  printf("Please enter your science marks\n");
  scanf("%d", &sci);

  printf("Please enter your english marks\n");
  scanf("%d", &eng);

  printf("Please enter your social marks here\n");
  scanf("%d", &soc);

  printf("Please enter your french marks\n");
  scanf("%d", &french);

  // Calculating total
  total = math + sci + eng + soc + french;
  percentage = total * 100.0 / 500.0;
  printf("So your total marks is %d and your percentage is %.2f", total, percentage);

  return 0;
}
