#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// A_len은 배열 A의 길이입니다.
// B_len은 배열 B의 길이입니다.
// 오름차순 x 내림차순 곱 

int  asc_compare(const void* a, const void* b)
{
  return *(int *)a - *(int *)b;  
}

int desc_compare(const void *a, const void *b)    
{
    return *(int *)b - *(int *)a;      
}

int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    qsort(A, A_len, sizeof(int), asc_compare);
    qsort(B, B_len, sizeof(int), desc_compare);
    
    for(int i=0; i<A_len; i++){
        answer= answer+(A[i]*B[i]);
    }
    return answer;
}
