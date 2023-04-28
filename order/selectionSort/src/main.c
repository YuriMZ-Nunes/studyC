#include <stdio.h>
#include <stdlib.h>

void selectionSort(int* vetor, int n);

int main(){
   int vetor[5] = {64, 35, 2, 23, 98};

   selectionSort(vetor, 5);

   for(int i = 0; i < 5; i++){
        printf("[%d] ", vetor[i]);
   }
   return 0;
}

void selectionSort(int* vetor, int n){
    int min_index, aux;

    for(int i = 0; i < n - 1; i++){
        min_index = i;
        for(int j = i + 1; j < n; j++){
            if(vetor[j] < vetor[min_index])
                min_index = j;
        }
        aux = vetor[min_index];
        vetor[min_index] = vetor[i];
        vetor[i] = aux;
    }
}
