#include <stdio.h>
#include <stdlib.h>

int * twoSum(int* nums, int numsSize, int target);

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

    return NULL;
}