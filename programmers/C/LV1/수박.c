#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char)*(n*3)+1);
    strcpy(answer,"수");

    for(int i = 2; i<=n; i++){
        if(i%2==0){
            char * bak = "박";
            strcat(answer, bak);
        }
        else{
            char * su = "수";
            strcat(answer, su);
        }
    }
    return answer;
}
