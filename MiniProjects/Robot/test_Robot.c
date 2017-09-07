#include <stdio.h>
#include "minunit.h"
#include "Robot.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\033[0m"

int testsRun = 0;

static char * whenEmptyString_ShouldReturnTrue(){
  int result = judgeCircle("");

  muAssert("When moves are empty, the result should be 1", 1 == result);
  return 0;
}

static char * whenULR_ShouldReturnFalse() {
  
    int result = judgeCircle("UL");
    
    muAssert("When moves are UP-LEFT-RIGHT, the result should be 0", 1 != result);
    return 0;
}

static char * whenUL_ShouldReturnFalse() {
  
    int result = judgeCircle("UL");
    
    muAssert("When moves are UP-LEFT, the result should be 0", 1 != result);
    return 0;
}

static char * whenUD_ShouldReturnTrue() {

  int result = judgeCircle("UD");
  
  muAssert("When moves are UP-DOWN, the result should be 1", 1 == result);
  return 0;
}

static char * whenLR_ShouldReturnTrue() {
  
    int result = judgeCircle("LR");
    
    muAssert("When moves are UP-DOWN, the result should be 1", 1 == result);
    return 0;
}

static char * allTests() {
  muRunTest(whenUD_ShouldReturnTrue);
  muRunTest(whenLR_ShouldReturnTrue);
  muRunTest(whenUL_ShouldReturnFalse);
  muRunTest(whenULR_ShouldReturnFalse);
  muRunTest(whenEmptyString_ShouldReturnTrue);

  return 0;
}

int main(int argc, char **argv) {
  char *result = allTests();
  if (result != 0) {
    printf("-_-_-_-_-_-_-_,------,      o \n");
    printf("_-_-_-_-_-_-_-|   /\\_/\\ \n");
    printf("-_-_-_-_-_-_-~|__( X .X)  +     + \n");
    printf("_-_-_-_-_-_-_- \"\"  \"\" \n");
    printf(KRED "✗ %s \n" RESET, result);
  }
  else {
    printf("-_-_-_-_-_-_-_,------,      o \n");
    printf("_-_-_-_-_-_-_-|   /\\_/\\ \n");
    printf("-_-_-_-_-_-_-~|__( ^ .^)  +     + \n");
    printf("_-_-_-_-_-_-_-  \"\"  \"\" \n");
    printf(KGRN " ✓ ALL TESTS PASSED \n" RESET);
  }
  printf("Tests run: %d\n", testsRun);
  return result != 0;
}
