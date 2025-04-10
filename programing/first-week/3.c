#pragma warning (disable:4956)

#include<stdio.h>

int main() {
    int mathScore, engScore, krScore;
    double averageScore;

    printf("국어, 영어, 수학 점수를 정수로 차레대로 입력해주세요 ex) 100 99 100 : ");
    scanf("%d %d %d", &krScore, &engScore, &mathScore);

    averageScore = (mathScore + engScore + krScore) / (double) 3;

    printf("\n평균 점수는 %.2f 점 입니다.\n", averageScore);

    return 0;
}