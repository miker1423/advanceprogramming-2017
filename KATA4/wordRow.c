#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "wordRow.h"

char **findWords(char **words, int wordSizes, int *returnSize, int *errorCode){
    char **results = (char **)calloc(*returnSize, sizeof(char*));
    int resultCounter = 0;

    for(int i =0; i < wordSizes; i++){
        if(wordInRow(words[i]) == 1){
            results[i] = words[i];
            resultCounter++;
        }
    }

    return results;
}

int wordInRow(char *word){
    int wordSize = strlen(word);
    if(wordSize != 0){
        int prevRow = 0;
        int currRow = 0;
        for(int currLetter = 0; currLetter < wordSize; currLetter++){
            int foundInRow = letterInRow(word[currLetter]);
            if(currLetter == 0){
                prevRow = foundInRow;
            }
            else{
                currRow = foundInRow;
                if(prevRow != currRow){
                    return 0;
                }
            }
        }
    }
    return 1;
}

int letterInRow(char letter){
    const int rowsNumber = 3;
    
    const char TOP_ROW[20] = {'Q', 'q', 'W', 'w', 'E', 'e', 'R', 'r', 'T', 't', 'Y', 'y', 'U', 'u', 'I', 'i', 'O', 'o', 'P', 'p'};
    
    const char MIDDLE_ROW[18] = {'A', 'a', 'S', 's', 'D', 'd', 'F', 'f', 'G', 'g', 'H', 'h', 'J', 'j', 'K', 'k', 'L', 'l'};
    
    const char BUTTOM_Row[14] = {'Z', 'z', 'X', 'x', 'C', 'c', 'V', 'v', 'B', 'b', 'N', 'n', 'M', 'm'};
    
    const char* ROWS[3] = {TOP_ROW, MIDDLE_ROW, BUTTOM_Row};
    
    for(int i = 0; i < rowsNumber; i++){

        int arrSize = strlen(ROWS[i]);

        for(int currChar = 0; currChar < arrSize; currChar++){
            if(letter == ROWS[i][currChar]){
                return i;
            }
        }
    }
}