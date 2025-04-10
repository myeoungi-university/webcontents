#pragma warning (disable:4956)

#include<stdio.h>

int main() {
    int inputData, second, minute, hour;

    printf("초를 입력해주세요 : ");
    scanf("%d", &inputData);

    hour = inputData / 3600;
    inputData %= 3600;

    minute = inputData / 60;
    inputData %= 60;
    
    second = inputData;

    printf("%d시 %d분 %d초 입니다.", hour, minute, second);
    
    return 0;
}