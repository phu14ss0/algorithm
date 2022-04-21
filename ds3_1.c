/*
크기가 10인 배열 two[]를 선언하고 여기에 2의 제곱 값들을 저장해보자. 
즉 배열의 첫 번째 요소에는 2^0을 저장하고, 두 번째 요소에는 2^1 값을 저장한다. 
마지막 요소에는 2^9 값을 저장한다. For 루프를 이용하여 two 배열의 전체 요소 값을 출력하는 프로그램을 작성하라.
*/ 
#include <stdio.h>
#include <math.h>

int main() {
    int two[10];

    for(int i = 0; i < 10; i++) {
        two[i] = pow(2, i);
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", two[i]);
    }

    return 0;
}