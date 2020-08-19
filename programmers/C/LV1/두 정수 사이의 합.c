#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    long sum = 0;
    if(a < b){
        for(a; a <= b; a++){
            sum += a;
        }
        answer = sum;
    }
    else if(a > b){
        for(b; b<=a ; b++){
            sum += b;
        }
        answer = sum;
    }
    else{
        answer = a;
    }
    return answer;
}
