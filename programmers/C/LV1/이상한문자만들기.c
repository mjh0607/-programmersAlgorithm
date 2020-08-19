#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char)*1000);
    int su = strlen(s);
    int count = 1;
    for(int i=0; i <su ;i++){
        //빈칸일 시
        if(s[i] == ' '){
            count=1;
            answer[i] = s[i];
            continue;
        }
        else{
            //홀수
            if(!(count%2==0)){
                if(65<=s[i] && s[i]<=90){
                    answer[i] = s[i];
                }
                else{
                     answer[i] = s[i]-32;
                }
            }
            else{
                if(97<=s[i] && s[i]<=122){
                    answer[i] = s[i];
                }
                else{
                    answer[i] = s[i]+32;
                }
            }
        }
        count++;
    }
    return answer;
}
