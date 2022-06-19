#include <stdio.h>

int main() {
  printf("Hello World!");
  printf("\nI am learning C!");

  // when printing values, you must use format specifiers, which is something that starts with a '%' and ends with a char
  int myNum = 15;
  printf("\n%i", myNum);

  // use const keyword when value is unlikely to change. if using const keyword, best practice is to declare them in uppercase
  const int MY_NUMBER = 60;
  return 0;
}
