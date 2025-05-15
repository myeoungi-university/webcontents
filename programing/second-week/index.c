#pragma warning (disable:4956)

#include <stdio.h>

int main() {
    int inputData;

    printf("검사하고 싶은 숫자를 입력하세요 : ");
    scanf("%d", &inputData);

    if(inputData > 0)
        printf("양수입니다\n");
    else if(inputData < 0)
        printf("음수입니다\n");
    else
        printf("0입니다\n");

    if(!inputData)
        printf("0입니다\n");
    else
        if(inputData < 0)
            printf("음수입니다\n");
        else
            printf("양수입니다\n");

    if(inputData == 0)
        printf("0입니다\n");
    else
        printf("%s", inputData > 0 ? "양수입니다\n" : "음수입니다\n");
}