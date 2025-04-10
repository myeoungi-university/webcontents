#pragma warning (disable:4956)

#include<stdio.h>

int main() {
    int inputData, absoluteValue;

    printf("절대값으로 변환하고 싶은 숫자를 입력해주세요 : ");
    scanf("%d", &inputData);

    absoluteValue = inputData;

    if(inputData < 0) {
        absoluteValue = -inputData;
    }

    printf("\n입력 받은 숫자 %d의 절댓값은 %d 입니다", inputData, absoluteValue);

    return 0;
}