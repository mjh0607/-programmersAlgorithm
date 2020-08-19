#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
long long gcd(long long a, long long b){
	while(b!=0){
		long long  r = a%b;
		a= b;
		b= r;
	}
	return a;
}

long long solution(long long w, long long h) {
    long long answer = 1;
    
    answer = w*h-(w+h-gcd(w,h));
    return answer;
}
