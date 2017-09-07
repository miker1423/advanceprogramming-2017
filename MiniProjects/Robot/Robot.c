#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Robot.h"

int judgeCircle(char* moves){
    int movesLength = strlen(moves);
    if(0 == movesLength){
        return 1;
    }

    int x = 0, y = 0;

    for(int i = 0; i < movesLength; i++){
        if('D' == moves[i]){
            y -= 1;
        }
        else if('U' == moves[i]){
            y += 1;
        }
        else if('L' == moves[i]){
            x += 1;
        }
        else if('R' == moves[i]){
            x -= 1;
        }
    }

    return (x == 0 && y == 0) ? 1 : 0;
}