#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>




char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char)*4);
    char* today[] = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
    int days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int sum = 0;
    
    for(int i=0; i<a; i++){
        sum += days[i-1];
    }
    sum += b;
    answer = today[sum%7];
    return answer;
}
