#include <stdlib.h>
#include "two-sum.h"

int main(){
    int nums[] = { 2, 7, 11, 15};
    int target = 9;
    int *result = twoSum(nums, 4, target);

    if(result != NULL && (nums[result[0]]+nums[result[1]] == target)){
        printf("WORKS!!\n");
    } else {
        printf(":(\n");
    }
}