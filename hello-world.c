#include <stdio.h>

int main(int argv, char ** args){

    int i;
    for(i = 1; i < argv; i++){
        printf("Hello %s\n", args[i]);
    }
    return 0;
}