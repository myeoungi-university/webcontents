#include <stdio.h>

int main() {
    int result = 0;
    char munja[] = "abcdefghij";
    char inputData;

    printf("한 개의 문자를 입력 해주세요 : ");
    scanf("%c", &inputData);
    
    for(int i = 0; i < 10; i++) {
        if(munja[i] == inputData) {
            result++;
        }
    }

    if(result > 0) {
        printf("있다.");
    }else {
        printf("없다.");
    }
}