#include <stdlib.h>
#include <stdio.h>
#include "island.h"

/*
* @Param
*  int** grid - matrix of integers
*  int gridRowSize - number of columns in the matrix
*  int gridColSize - number of columns per row
* @Return
*  int perimeter - the perimeter of the island
*/
int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    int perimeter = 0, 
        i = 0, 
        j = 0;

    for(i = 0; i < gridRowSize; i++){
       for (j = 0; j < gridColSize; j++){
          if(grid[i][j] == 1){
             if (((i - 1) < 0 ) || (grid[i-1][j] == 0)){
                perimeter++;
             }
             if (((j - 1) < 0 ) || (grid[i][j-1] == 0)){
                perimeter++;
             }
             if (((i + 1) >= gridRowSize ) || (grid[i+1][j] == 0)){
                perimeter++;
             }
             if (((j + 1) >= gridColSize ) || (grid[i][j+1] == 0)){
                perimeter++;
             }
          }   
       }
    }
    
    return perimeter;
}