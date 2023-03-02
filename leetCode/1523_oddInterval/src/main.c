#include <stdio.h>

int countOdds(int low, int high){
    int count;
    count = (high - low + 1);
    if(count%2 == 0){
        return count/2;
    }else{
        if(high % 2 != 0 || low % 2 != 0)
            return count/2;
        else
            return count/2 + 1;
    }
}

int main(){

    int high = 10, low = 8, count;
    count = countOdds(low, high);

    return 0;
}
