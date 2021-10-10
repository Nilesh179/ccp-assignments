#include <stdio.h>

int main()
{
  int a;
  float b;
  char c;

  printf("Enter an integer value : ");
  scanf("%d", &a);
  printf("Enter a float value: ");
  scanf("%f", &b);
  printf("Enter a character value : ");
  scanf(" %c", &c);

  printf("Integer: %d, Float: %.2f, Char: %c\n", a, b, c);

  return 0;
}
