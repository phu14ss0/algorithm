// 1부터 n까지의 합을 계산하는 알고리즘을 의사코드로 작성해보자.
#include <stdio.h>

int sum2n(int n) {
    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n = 10, sum;
    sum = sum2n(n);

    printf("[*] Sum 1 to N : %d\n", sum);
    return 0;
}