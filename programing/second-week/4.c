#pragma warning (disable:4956)

#include<stdio.h>

int main() {
    char inputData;
    
    printf("한개의 문자를 입력해주세요 : ");
    scanf("%c", &inputData);

    if(inputData >= 'A' && inputData <= 'Z') {
        printf("%c는 대문자 입니다", inputData);
        return 0;
    }
    
    printf("대문자 아닙니다.");
    return 0;
}