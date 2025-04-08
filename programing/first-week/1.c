#pragma warning (disable:4956)

#include<stdio.h>

int main() {
    int money = 0;
    double dollar = 0;

    printf("바꾸고 싶은 돈의 액수를 정수로 입력해주세요 ex) 5000000 : ");
    scanf("%d", &money);

    printf("\n달러 환율은 얼마인가요? : ");
    scanf("%lf", &dollar);

    printf("\n원화: %d \n", money);
    printf("달러: %f$ \n", money / dollar);

    return 0;
}