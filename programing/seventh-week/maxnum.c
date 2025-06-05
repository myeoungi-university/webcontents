#include <stdio.h>

int main() {
    int maxNum;
    int number[10];

    for(int i = 0; i < 10; i++) {
        printf("정수를 입력해주세요 : ");
        scanf("%d", &number[i]);
    }
    
    maxNum = number[0];
    for(int j = 1; j < 10; j++) {
        if(maxNum < number[j]) {
            maxNum = number[j];
        }
    }

    int count = 0;
    while (count < 10)
    {
        printf("정수를 입력해주세요 : ");
        scanf("%d", &number[count]);
    
        if(number[count] >= maxNum || count == 0){
            maxNum = number[count];
        }

        count++;
    }

    printf("최대값은 %d 입니다. \n", maxNum);
}