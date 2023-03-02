#include <stdio.h>

int reverse(int x){
    int rev = 0;

    if(x < 0){
        x *= -1;
        while(x > 0){
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev * -1;
    }

    while(x > 0){
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    return rev;
}

int main(){
    int x = -123;
    reverse(x);
    return 0;
}
