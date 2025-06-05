#pragma warning (disable:4956)

#include <stdio.h>

int main() {
    int inputNumber;

    printf("자연수를 입력해주세요 : ");
    scanf("%d", &inputNumber);

    for(int index = 1; index <= inputNumber; index++) {
        if(inputNumber % index == 0) {
            printf("%d ", index);
        }
    }

    printf("\n");

    return 0;
}