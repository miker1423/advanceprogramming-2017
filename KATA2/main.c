#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "LenghtLastWord.h"

/* Add function signatures here */

int main(int argc, char **argv) {
  int length, i, j;
  char* str;
  
  for(i = 0; argv[i] != '\0'; i++){}
  str = malloc(i);

  for(j = 1; j < i; j++){
    strcat(str, argv[j]);
    strcat(str, " ");
  }

  length = lastWordLenght(str);
  printf("El tamaño de la ultima palabra es %d\n", length);

  return 0;
}
