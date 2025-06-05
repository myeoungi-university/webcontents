#pragma warning (disable:4956)

#include <stdio.h>

int main() {
    int index = 1;

    int result = 0;

    while(index <= 100) {
        if(index % 3 == 0) {
            printf("%d \n", index);
            result++;
        }

        index++;
    }

    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0) {
            printf("%d \n", i);
            result++;
        }
    }

    index = 1;
    do
    {
        if(index % 3 == 0) {
            printf("%d \n", index);
            result++;
        }
        index++;
    } while (index <= 100);
    
    printf("1부터 100의 3의 배수의 개수는 %d개 입니다.", result);
    
    return 0;
}