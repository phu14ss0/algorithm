// 2개의 정수를 서로 교환하는 알고리즘을 의사 코드로 작성해보자.
#include <stdio.h>

int swap(int *num1, int *num2) {
    int tmp;
    tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;

    return 0;
}

int main() {

    int num1 = 10, num2 = 20;
    swap(&num1, &num2);

    printf("[*] num1: %d / num2 : %d\n", num1, num2);
    return 0;
}