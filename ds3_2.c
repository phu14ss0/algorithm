/* 1개의 정수와 최대 크기가 20인 문자열로 이루어진 구조체를 저장할 수 있도록 동적 메모리를 할당받고 
여기에 정수 100과 문자열 “just testing”을 저장한 다음 동적 메모리를 반납하는 프로그램을 작성하라.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Prob_12 {
    int num;
    char str[20];
};

int main() 
{
    struct Prob_12 *p = malloc(sizeof(struct Prob_12));

    p->num = 100;
    strcpy(p->str, "just testing");

    printf("[*] Num : %d\n", p->num);
    printf("[*] String: %s\n", p->str);

    free(p);
    return 0;
}