#include<stdio.h>

int main() {
    int result = 0, count = 0;
    int inputData;

   while (inputData >= 0)
   {
        printf("학생의 국어점수를 입력하세요(종료 하고 싶으시면 음수를 입력해주세요) : ");
        scanf("%d", &inputData);

        if(inputData <= 100 && inputData >= 0) {
            result += inputData;
            count++;
        }
   }

    printf("평균 점수는 : %.1f 입니다", (double)result /count);
    
}