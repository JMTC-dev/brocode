#include <stdbool.h>
#include <stdio.h>
int main() {
  int age = 23;
  float weight = 82.5;
  double favouriteNumber = 123.123;
  char symbol = 'J';
  char name[] = "Jack";
  bool isHandsome = true;

  printf("My age is %d, weight is %f, favourite number is %lf, symbol is %c, "
         "name is %s ",
         age, weight, favouriteNumber, symbol, name);
  if (isHandsome) {
    printf("and I am handsome.\n");
  } else {
    printf("I am not handsome.\n");
  }

  return 0;
}
