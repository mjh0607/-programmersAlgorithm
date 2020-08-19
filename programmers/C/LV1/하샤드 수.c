#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int sum=0;
    int i =0;
    int n = x;
    while(n>0){
        sum += n%10;
        n=n/10;
    }
    if(x%sum == 0){
        return answer;
    }
    return false;
}
