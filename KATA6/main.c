#include <stdlib.h>
#include <stdio.h>
#include "FIZZBUZZ.h"

/* Add function signatures here */

int main(int argc, char **argv) {

  int number = 0;
  number = atoi(argv[1]);

  char **result = FizzBuzz(number);
  for(int i=0; i < number; i++){
    printf("%s\n", result[i]);
  }

  return 0;
}
