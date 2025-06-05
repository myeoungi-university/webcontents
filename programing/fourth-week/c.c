#pragma warning (disable:4956)

#include <stdio.h>

int main() {
    char a, b;

    // printf("문자 두개를 입력해주세요 : ");
    // scanf("%c %c", &a, &b);
    
    printf("문자를 입력해주세요 : ");
    scanf("%c", &a);

    printf("문자를 입력해주세요 : ");
    scanf(" %c", &b);

    if(a == b)
        printf("깉습니다\n");
    else
        printf("다릅니다\n");
}