#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
long long solution(long long n) {
    long long answer = -1;
    for(int i = 0; i<= n; i++){
        if(i == pow(n,0.5)){
            answer = pow(i+1,2);
            return answer;
        }
    }
    return answer;
}
