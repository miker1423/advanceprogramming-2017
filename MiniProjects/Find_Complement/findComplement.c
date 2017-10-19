#include <stdlib.h>
#include <stdio.h>
#include "findComplement.h"

/* 
* @Param
*  int number
*  findComplement:
*    Given a positive integer, output its complement number.  
* @Return
*  int
*   Returns the complement (on bits) of the given number
* References:
*  Bitwise operators -> https://en.wikipedia.org/wiki/Bitwise_operations_in_C
* Explenation:
*  The complement number is the number in bits such that, when maken an OR operation
*  on the bits, you get all 1s
* Example
*  101 = 5
*  010 = 2 -> this is the comlement of 5   
*/
int findComplement(int number){
    unsigned int i;
    for(i = 1; i <= number; i *= 2){
        number ^= i;
    }
    return number;
}