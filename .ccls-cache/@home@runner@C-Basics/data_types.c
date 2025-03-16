#include <stdio.h>

int main() {

  int num = 10;
  float num2 = 10.9;
  long double num3 = 10.23794782374;
  char ch = 100;
  char ch2 = 'A';

  char string[] = "Hello World";

  printf("%d\n", num);
  printf("%.2f\n", num2);
  printf("%Lf\n", num3);
  printf("%c\n", ch);
  printf("%c\n", ch2);
  printf("%s", string);

  return 0;
}