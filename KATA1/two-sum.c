#include <stdio.h>
#include <stdlib.h>
#include "two-sum.h"

int * twoSum(int* nums, int numsSize, int target) {
    int * result;

    result = calloc(2, sizeof(int));

    for(int i = 0; i < numsSize - 1; i++){
        if(nums[i] < target){
            for(int j = i + 1; j < numsSize; j++){
                if(nums[i]+nums[j] == target){
                    result[0] = i;
                    result[1] = j;
                    return result;
                }
            }
        }
    }

    return result;
}