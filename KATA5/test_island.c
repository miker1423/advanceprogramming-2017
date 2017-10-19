#include <stdio.h>
#include <stdlib.h>
#include "minunit.h"
#include "island.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\033[0m"

/*
TEST ISLAND 1
[0100]
[1110]
[0100]
[1100]

TEST ISLAND 2
[0100]
[1100]
*/

int testsRun = 0;

static char * whenTest1_ShouldReturn16() {
  int **array;
  int columns = 4;
  int rows = 4;
  int expected = 16;
  int i = 0;

  array = (int**) calloc(rows, sizeof(int*));
  for(i = 0; i < rows; i++){
    array[i] = (int*)calloc(columns, sizeof(int));
  }
  
  array[0][0] = 0;
  array[0][1] = 1;
  array[0][2] = 0;
  array[0][3] = 0;

  array[1][0] = 1;
  array[1][1] = 1;
  array[1][2] = 1;
  array[1][3] = 0;

  array[2][0] = 0;
  array[2][1] = 1;
  array[2][2] = 0;
  array[2][3] = 0;

  array[3][0] = 1;
  array[3][1] = 1;
  array[3][2] = 0;
  array[3][3] = 0;

  int result = islandPerimeter(array, rows, columns);

  muAssert("Error, perimeter is wrong", expected == result);

  return 0;
}

static char * whenTest2_ShouldReturn8(){
  int **array;
  int columns = 4;
  int rows = 2;
  int expected = 8;
  int i = 0;
  
  array = (int**) calloc(rows, sizeof(int*));
  for(i = 0; i < rows; i++){
    array[i] = (int*)calloc(columns, sizeof(int));
  }

  array[0][0] = 0;
  array[0][1] = 1;
  array[0][2] = 0;
  array[0][3] = 0;

  array[1][0] = 1;
  array[1][1] = 1;
  array[1][2] = 0;
  array[1][3] = 0;
  
  int result = islandPerimeter(array, rows, columns);

  muAssert("Error, perimeter is wrong", expected == result);

  return 0;
}

static char * allTests() {
  muRunTest(whenTest1_ShouldReturn16);
  muRunTest(whenTest2_ShouldReturn8);
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
