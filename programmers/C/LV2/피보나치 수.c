#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int zero = 0;
    int one = 1;
 
    if(n==1){
        return 1;
    }
    else{
        for(int i=2; i <= n; i++){
            answer = (zero+one)%1234567;
            zero = one;
            one = answer;
        }
        return answer;
    }
}
