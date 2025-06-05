#include <stdio.h>

int main() {
    int studentCount;

    float koreanScoreAverage = 0.0;
    float englishScoreAverage = 0.0;
    float mathScoreAverage = 0.0;
    int scholarshipStudent;

    printf("학생 수를 입력해주세요 : ");
    scanf("%d", &studentCount);

    int studentNumber[studentCount];
    char studentName[studentCount];
    int koreanScore[studentCount];
    int englishScore[studentCount];
    int mathScore[studentCount];
    int totalScore[studentCount];
    int ranking[studentCount];
    float averageScore[studentCount];

    printf("\n학생정보 학생이니셜 국어점수 영어점수 수학점수 \n");
    for (int i = 0; i < studentCount; i++) {
        scanf("%d %c %d %d %d", &studentNumber[i], &studentName[i], &koreanScore[i],
                      &englishScore[i], &mathScore[i]);

        if (studentNumber[i] >= 0 &&
                (mathScore[i] >= 0 && mathScore[i]) <= 100 &&
                (koreanScore[i] >= 0 && koreanScore[i]) <= 100 &&
                (englishScore[i] >= 0 && englishScore[i]) <= 100
            ) {
            totalScore[i] = mathScore[i] + koreanScore[i] + englishScore[i];

            averageScore[i] = (float) totalScore[i] / (float) 3;

            koreanScoreAverage /= (float) studentCount;
            englishScoreAverage /= (float) studentCount;
            mathScoreAverage /= (float) studentCount;
        }

        if (studentName[i] >= 'a' && studentName[i] <= 'z') {
            studentName[i] -= 32;
        }
    }

    for (int i = 0; i < studentCount; i++) {
        koreanScoreAverage += (float) koreanScore[i];
        englishScoreAverage += (float) englishScore[i];
        mathScoreAverage += (float) mathScore[i];

        ranking[i] = 1;
        for (int j = 0; j < studentCount; j++) {
            if (totalScore[j] > totalScore[i]) {
                ranking[i]++;
            }
        }
    }

    koreanScoreAverage /= (float) studentCount;
    englishScoreAverage /= (float) studentCount;
    mathScoreAverage /= (float) studentCount;

    scholarshipStudent = (int) (studentCount * 0.2 + 0.5);

    printf("학생번호 학생이니셜 국어점수 영어점수 수학점수 총점 평균 등수 \n");

    for (int i = 0; i < studentCount; i++) {
        printf("%d %c %d %d %d %d %.2f %d \n", studentNumber[i], studentName[i], koreanScore[i], englishScore[i],
               mathScore[i], totalScore[i], averageScore[i], ranking[i]);
    }

    printf("국어 : %.2f 점 영어 : %.2f 점 수학 : %.2f 점\n", koreanScoreAverage, englishScoreAverage, mathScoreAverage);

    int count = 0;

    printf("장학생 명단\n");

    for (int i = 0; i < studentCount; i++) {
        if (ranking[i] <= scholarshipStudent && count != scholarshipStudent) {
            printf("%d %d %d \n", studentNumber[i], totalScore[i], ranking[i]);
            count++;
        }
    }

    char inputData;
    int foundValue = 0;
    do {
        printf("조회하고자 하는 학생의 이니셜을 입력하세요 (종료하려면 0을 입력해주세요) : ");
        scanf(" %c", &inputData);

        if (inputData != '0') {
            if (inputData >= 'a' && inputData <= 'z') {
                inputData -= 32;
            }

            foundValue = 0;

            for (int i = 0; i < studentCount; i++) {
                if (studentName[i] == inputData) {
                    printf("%d %c %d %d %d %d %.2f %d \n", studentNumber[i], studentName[i], koreanScore[i], englishScore[i],
                        mathScore[i], totalScore[i], averageScore[i], ranking[i]);
                    foundValue = 1;
                }
            }

            if (foundValue == 0) {
                printf("없는 이니셜입니다\n");
            }
        }
    } while (inputData != '0');

    return 0;
}
