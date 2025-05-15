#pragma warning (disable:4956)

#include<stdio.h>

int main() {
    int inputData;
    int ticketValue = 10000;
    
    printf("나이를 입력하세요 : ");
    scanf("%d", &inputData);

    if(inputData >= 65) {
        ticketValue -= (int) ticketValue * 0.1;
    }
    else if(inputData >= 7 && inputData <= 18) {
        ticketValue -= (int) ticketValue * 0.2;
    }
    else if(inputData <= 6){
        ticketValue -= ticketValue;
    }

    if(inputData >= 65)
        ticketValue -= (int) ticketValue * 0.1;
    else if(age > 18)
        ticketValue = ticketValue;
    else if(age >= 7)
        ticketValue -= (int) ticketValue * 0.2;
    else if(age > 0)
        ticketValue = 0;
        
    printf("입장료는 %d 원 입니다.", ticketValue);

    if(inputData <= 6) {
        ticketValue = 0;
    } else {
        if(inputData >= 65) {
            ticketValue -= ticketValue * 10 / 100;
        }
        else {
            ticketValue -= ticketValue * 20 / 100;
        }
    }
    printf("%d원 입니다\n", ticketValue);

    return 0;
}