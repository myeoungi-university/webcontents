#pragma warning (disable:4956)

#include<stdio.h>

int main() {
    int inputData;
    
    printf("검사하고 싶은 숫자를 입력하세요 : ");
    scanf("%d", &inputData);

    if(inputData / (inputData / 3) == 3)
        printf("3의 배수입니다\n");
    else
        printf("3의 배수가 아닙니다\n");
    
    if(inputData % 3)
        printf("3의 배수가 아닙니다\n");
    else 
        printf("3의 배수입니다\n");
        
    if(inputData % 3 == 0)
        printf("3의 배수입니다\n");
    else
        printf("3의 배수가 아닙니다\n");

    inputData % 3 == 0 ? printf("3의 배수입니다\n") : printf("3의 배수가 아닙니다\n");

    printf("%s",  inputData % 3 == 0 ? "3의 배수입니다" : "3의 배수가 아닙니다");       
}