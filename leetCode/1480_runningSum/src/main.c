#include <stdio.h>
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize){
    int *result = malloc(sizeof(int) * numsSize);
    int sum = 0;
    for(int i = 0; i < numsSize; i++){
        sum += nums[i];
        result[i] = sum;
    }
    *returnSize = sizeof(nums);
    return result;
}

int main(){
    int nums[4] = {1, 2, 3, 4};
    int numsSize = 4;
    int *returnSize = malloc(sizeof(int) * 4);

    runningSum(nums, numsSize, returnSize);

    return 0;
}
