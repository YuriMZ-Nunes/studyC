#include <stdio.h>
#include <stdbool.h>

bool isSubsequence(char * s, char * t){
    while(*s && *t){
        if(*s == *t)
            s++;
        t++;
    }
    if(*s)
        return false;
    return true;
}

int main(){
    char s[3] = "abc";
    char t[6] = "ahbfjc";

    isSubsequence(s, t);
}
