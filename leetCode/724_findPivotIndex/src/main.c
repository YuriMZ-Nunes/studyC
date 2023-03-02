#include <stdio.h>

int pivotIndex(int* nums, int numsSize){
    int left = 0, sum = 0;
    for(int i = 0; i < numsSize; i++)
        sum += nums[i];
    
    for(int j = 0; j < numsSize; j++){
        left += nums[j];
        if(left == sum)
            return j;
        sum -= nums[j];
    }
    return -1;
}

int main(){
    int nums[3] = {2, 1, -1};
    int numsSize = 3;

    pivotIndex(nums, numsSize);

    return 0;
}
