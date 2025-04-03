#include<stdio.h>

float CalculateExtend(int radius) {
    return radius * radius * 3.14;
}

int main() {
    int inputData, filterData;

    printf("원의 반지름 값을 입력해주세요");
    scanf("%d", &inputData);

    printf("넓이를 구하실꺼라면 1번을 입력해주세요");
    scanf("%d", &filterData);
    
    if(filterData == 1) {
        float extend = CalculateExtend(inputData);
        printf("%lf", extend);
    }
    else {
        printf("종료되었습니다.");
    }
    return 0;
}