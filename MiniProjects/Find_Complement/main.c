#include <stdlib.h>
#include <stdio.h>
#include "findComplement.h"

int main(int argc, char **argv) {
  int number;

  printf("Give me a number: ");
  scanf("%d", &number);

  int complement = findComplement(number);

  printf("The complement is %d\n", complement);
  return 0;
}
