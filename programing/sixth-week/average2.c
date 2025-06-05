#include<stdio.h>

int main() {
    int count, inputData;
    int result = 0;
    
    printf("학생 수를 입력해주세요 : ");
    scanf("%d", &count);

    for(int i = 1; i <= count; i++) {
        printf("%d번째 학생의 점수를 입력해주세요(0 ~ 100) : ", i);
        scanf("%d", &inputData);

        if(inputData <= 100 && inputData >= 0) {
            result += inputData;
        }
    }

    printf("학생 %d명의 평균 점수는 : %.1f점 입니다\n", count, (double)result /count);
}