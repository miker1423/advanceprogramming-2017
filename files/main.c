#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include "texto.h"

int main(int argc, char **argv){
  FILE *myFile;
  assert(argc == 2);
  myFile = fopen(argv[1], "r");
  assert(myFile != NULL);

  int temperature; 
  double avarage;
  int count = 0;
  while(fscanf(myFile,"temp %d\n", &temperature) != 0){
    if(feof(myFile)){
      break;
    }

    if(count == 0){
      avarage = temperature;
    }else{
      avarage = (avarage * count + temperature);
      count++;
      avarage /= count;
    }
  }

  printf("%lf\n", avarage);

  fclose(myFile);
  return 0;
}

/*
int main(int argc, char **argv) {

  FILE *myFile;
  assert(argc == 2);
  myFile = fopen(argv[1], "r");
  assert(myFile != NULL);

  int c; 
  while((c = fgetc(myFile)) != EOF){
    putchar(toupper(c));
  }

  fclose(myFile);
  return 0;
}
*/