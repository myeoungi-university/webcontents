#pragma warning (disable:4956)

#include<stdio.h>

int main() {
    int inputData;
    
    
    printf("국어 점수를 입력하세요 : ");
    scanf("%d", &inputData);

    // 정상적인 점수시 Printf 및 종료 오류시 오류 점수 판별
    if(inputData >= 0 && inputData <= 100){
        printf("정상적인 점수입니다.");
        return 0;
    }
    
    printf("잘못된 점수 입니다");
    return 0;

    //정석저인 if Else 문
    if(inputData >= 0 && inputData <= 100){
        printf("정상적인 점수입니다.");
    }
    else {
        printf("잘못된 점수 입니다");
    }
    return 0;

    //반대로 잘못된 점수 검증
    if(inputData < 0 || inputData > 100) {
        printf("잘못된 점수 입니다");
    } else {
        printf("정상적인 점수 입니다");
    }

    printf("%s", inputData >= 0 && inputData <= 100 ? "정상적인 점수 입니다." : "잘못된 점수 입니다");

    if(inputData < 0){
        printf("잘못된 점수입니다");
    }
    else if(inputData > 0) {
        printf("잘못된 점수입니다");
    }
    else {
        printf("정상적인 점수입니다");
    }

    return 0;
}