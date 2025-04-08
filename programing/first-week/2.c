#pragma warning (disable:4956)

#include<stdio.h>

int main() {
    int celsius;

    printf("섭씨 온도를 입력해주세요 : ");
    scanf("%d", &celsius);

    double fahrenheit = celsius * (9/5.0)+ 32;

    printf("\n섭씨 온도 : %d\n화씨 온도 : %.1f \n", celsius, fahrenheit);

    return 0;
}