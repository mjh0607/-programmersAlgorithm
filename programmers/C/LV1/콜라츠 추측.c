#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    long long answer = num;
    for(int i=0; i<=500; i++)
    if(answer==1)
        return i;
    else if(answer%2==1)
        answer = answer*3+1;
    else
        answer /= 2;
    
    return -1;
}
