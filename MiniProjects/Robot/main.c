#include <stdlib.h>
#include <stdio.h>
#include "Robot.h"

/* Add function signatures here */

int main(int argc, char **argv) {

  int result = judgeCircle("UD");
  if(result == 0){
    printf("Its not a circle");
    return 0;
  }

  printf("Its a circle!");
  return 0;
}
