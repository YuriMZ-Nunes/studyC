#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int minOperations(char **logs, int logsSize);

int main(){
    int logsSize = 3;
    char **logs = malloc(logsSize);

    //Exemplo 2
    logs[0] = "./";
    logs[1] = "../";
    logs[2] = "./";

    minOperations(logs, logsSize);

    free(logs);
}

int minOperations(char **logs, int logsSize){
    
    int stepsToBack = 0; //num de operações para voltar

    for(int i = 0; i < logsSize; i++){
        if(stepsToBack == 0){ //verifica se logs[0] é uma operação de entrar na pasta
            if(strcmp(logs[i], "../")!= 0 && strcmp(logs[i], "./")!= 0)
                stepsToBack++;
        }else{
            if(strcmp(logs[i], "../") == 0 ) //verifica se logs[i] é uma operação para voltar
                stepsToBack--;
            else if(strcmp(logs[i], "./") != 0 ){ //se não for para voltar, verifica se é para entrar na pasta
                stepsToBack++;
            }
        }
    } 

    return stepsToBack;
}
