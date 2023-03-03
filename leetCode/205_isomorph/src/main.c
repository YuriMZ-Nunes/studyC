#include <stdio.h>
#include <stdbool.h>

bool isIsomorphic(char * s, char * t){
    char map1[256] = {0};
    char map2[256] = {0};

    int i = 0;
    while(s[i] != '\0'){
        if(map1[s[i]]=='\0' && map2[t[i]] == '\0'){
            map1[s[i]] = t[i];
            map2[t[i]] = s[i];
        }else if(map1[s[i]] != t[i] || map2[t[i]] != s[i])
            return false;
        i++;
    }

    return true;
}

int main(){
    char s[5] = "paper";
    char t[5] = "title";

    isIsomorphic(s, t);
}
