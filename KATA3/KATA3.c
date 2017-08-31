#include <stdlib.h>
#include <stdio.h>
#include "KATA3.h"

int canBeBuild(char *ransomArr, char *magazine){
  int count, i, j;

    count = 0;

    for (i = 0; ransomArr[i] != '\0'; i++) {
      for (j = 0; magazine[j] != '\0'; j++) {
        if (ransomArr[i] == magazine[j]) {
          count++;
          break;
        }
      }
    }

    if (count == i) {
      return 1;
    }

    return 0;
}
