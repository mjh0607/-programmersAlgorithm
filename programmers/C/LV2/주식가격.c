#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// prices_len은 배열 prices의 길이입니다.
int* solution(int prices[], size_t prices_len) {
    int* answer = (int*)malloc(sizeof(int)*prices_len);
    int cnt = 0;

    for (int i = 0; i< prices_len; i++) {
        for (int j = i+1; j < prices_len; j++) {
            cnt++;
            if (prices[i] > prices[j]) {
                break;
            }
        }
        answer[i] = cnt;
        cnt = 0;
    }
    return answer;
}
