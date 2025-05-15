#pragma warning (disable:4956)

#include<stdio.h>

int main() {
    char inputData;

    printf("입력 : ");
    scanf("%c", &inputData);

    // if(inputData == 'a' || inputData == 'A') {
    //     printf("사과");
    // } else if(inputData == 'b' || inputData == 'B') {
    //     printf("바나나");
    // } else if(inputData == 'c' || inputData == 'C') {
    //     printf("체리");
    // } else if(inputData == 'd' || inputData == 'D') {
    //     printf("두리안");
    // }

    switch (inputData)
    {
        case 'a': case 'A':
            printf("사과");
            break;
        case 'b': case 'B':
            printf("바나나");
            break;
        case 'c': case 'C':
            printf("체리");
            break;
        case 'd': case 'D':
            printf("두리안");
            break;
        default:
            printf("지정되지 않은 문자입니다");
            break;
    }
}