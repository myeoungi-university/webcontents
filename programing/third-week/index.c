#pragma warning (disable:4956)

#include<stdio.h>

int main() {
    int num1, num2, num3, maxNum;
    
    printf("정수 세개를 입력하십시오 : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    maxNum = num1;

    if(maxNum < num2) {
        maxNum = num2;
    }
    
    if(maxNum < num3) {
        maxNum = num3;
    }

    printf("최대값은 %d 입니다", maxNum);

    return 0;
}