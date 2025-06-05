#include<stdio.h>

int main() {
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <=3; j++) {
            printf("%d학년 %d반 ",j, i);
        }
        printf("\n");
    }
}