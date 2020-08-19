#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    char* answer;
    int i = 0;
    int k = 0;
    int len = strlen(s);
    answer = (char *)malloc(sizeof(char) *len + 1);
    int tmp;    
    strcpy(answer, s);
    answer[len] = '\0';
    for(i=0; i <len-1; i++){
        k=0;
        for(k;k<len-1-i;k++){
            if(answer[k]<answer[k+1]){
                tmp = answer[k];
                answer[k] = answer[k+1];
                answer[k+1] = tmp;
            }
        }
    }
    return answer;
}
