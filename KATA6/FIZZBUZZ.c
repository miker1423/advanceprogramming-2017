#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "FIZZBUZZ.h"

char** FizzBuzz(int n){

    char **result = calloc(n, sizeof(char*));

    for(int i = 1; i <= n; i++){
        if(i%3 == 0){
            if(i%5==0){
                //FIZZBUZZ
                result[i - 1] = strdup("FizzBuzz");
            }
            else{
                //FIZZ
                result[i - 1] = strdup("Fizz");
            }
        }
        else if(i%5 == 0){
            //BUZZ
            result[i - 1] = strdup("Buzz");
        }
        else{
            //NUMERO
            char *buffer = calloc(10, sizeof(char));
            sprintf(buffer, "%d", i);
            result[i - 1] = buffer;
        }
    }

    return result;
}