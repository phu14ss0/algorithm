// 2개의 정수를 서로 교환하는 알고리즘을 의사 코드로 작성해보자.
#include <stdio.h>

int find_big(int num1, int num2) {
    if(num1 > num2)
        return num1;
    else
        return num2;
}

int main() {
    int num1, num2, big;

    scanf("%d %d", &num1, &num2);
    big = find_big(num1, num2);

    printf("[*] Big Number : %d\n", big);
    return 0;
}