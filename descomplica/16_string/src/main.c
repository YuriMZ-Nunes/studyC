#include <stdio.h>
#include <string.h>

int main(){
    char word[10];
    printf("Digite algo: ");
    scanf("%s", word);

    int l = strlen(word);

    for(int i = 0; i < l; i++)
        word[i] += 32;

    printf("\n%s", word);

    return 0;
}
