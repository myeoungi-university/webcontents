#include <stdio.h>

int main() {
    int student, total = 0;

    printf("학생 수를 입력하세요 : ");
    scanf("%d", &student);

    int koreanNumbers[student];

    for(int i = 0; i < student; i++) {
        printf("%d번째 학생의 국어 점수를 입력하세요 : ", i + 1);
        scanf("%d", &koreanNumbers[i]);

        total += koreanNumbers[i];
    }
    
    for(int i = 0; i < student; i++) {
        printf("%d점 ", koreanNumbers[i]);
    }
    
    printf("의 평균 점수는 %.2f점 입니다.", total / (double)student);
}