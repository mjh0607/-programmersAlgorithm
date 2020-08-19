#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int prime(int num){
    int i = 2;
    while(1){
        if(i<=sqrt(num)){
            if(num%i==0){
                return 0;
            }
            else{
                i++;
            }
        }
        else{
            return 1;
        }
    }
}

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer = 0;
    int tmp;
    
    for(int i = 0; i <nums_len - 2; i++){
        for(int j = i+1; j < nums_len -1; j++){
            for(int k = j+1; k < nums_len; k++){
                tmp = nums[i]+nums[j]+nums[k];
                if(prime(tmp) == 1){
                    answer++;
                }
            }
        }
    }
    return answer;
}
