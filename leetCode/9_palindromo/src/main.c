#include <stdio.h>

int main(){
    int x = 121;
    int aux = 0;

    while(x != 0){
        aux = aux * 10 + x % 10;
        x /= 10;
    }

    printf("\n pali: %d", aux);
}
