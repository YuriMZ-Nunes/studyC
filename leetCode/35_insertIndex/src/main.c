#include <stdio.h>

int main(){
    int numsSize = 4;
    int target =  7;
    int nums[4] = {1, 3, 5, 6};

    for(int i = 0; i < numsSize; i++){
        if(i == 0){
            if(target == nums[0] || target < nums[0])
                return 0; 
        }else if(target == nums[i] || (target > nums[i - 1] && target < nums[i]))
            return i;
    }
    return numsSize;
}
