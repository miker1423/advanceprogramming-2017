#include <stdlib.h>
#include <stdio.h>
#include "LenghtLastWord.h"

int lastWordLenght(char* s){
    int i, j, count = 0, startCount = 0;

    for(i = 0; s[i] != '\0'; i++){}

    if(i > 0){
        for(j = i - 1; j >= 0; j--){
            if(s[j] != ' '){
                startCount = 1;
                count++;
            }

            if(s[j] == ' ' && startCount == 1){
                return count;
            }
        }
    }

    return count;
}

