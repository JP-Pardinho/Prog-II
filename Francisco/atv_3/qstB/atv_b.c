#include <stdio.h>

int main()
{
  float x;

  int a = 40, b = 40;

  x = a % b / 4.0;

  int logico = a > 9 && b + 66 < a || b >= 1;

  printf("%d %f", logico, x);

  return 0;
}