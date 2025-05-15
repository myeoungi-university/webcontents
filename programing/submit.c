#pragma warning (disable:4956)

#include<stdio.h>

double dutyCalcurator(double totalSalary) {
    if(totalSalary < 30000) {
        return totalSalary * 0.05;
    }     
    else if(totalSalary < 70000) {
        return totalSalary * 0.1;
    }
    else {
       return totalSalary * 0.15;
    }
}

double refundCacurator(double salary, int dependentsCount, int creditCardUsage, int checkCardUsage) {
    double totalRefund = 0;
    totalRefund += dependentsCount * 2000;

    if(salary * 0.3 < creditCardUsage) {
        totalRefund += (creditCardUsage - salary * 0.3) * 0.1;
    }
    if(salary * 0.3 < checkCardUsage) {
        totalRefund += (checkCardUsage - salary * 0.3) * 0.2;
    }
    return totalRefund;
}

int main() {
    int employeeNumber, age, workingSecond, dependentsNumber, creditCard, checkCard,
    workingHour = 0, workingMinute = 0, overtimeHour = 0, overtimeMinute = 0;
    double salary, afterSalary, duty, refund;
    char departmentCode;

    printf("사원 번호 : ");
    scanf("%d", &employeeNumber);

    printf("나이 : ");
    scanf("%d", &age);

    printf("부서코드 : ");
    scanf(" %c", &departmentCode);

    printf("근무시간 : ");
    scanf("%d", &workingSecond);

    printf("부양 가족수 : ");
    scanf("%d", &dependentsNumber);

    printf("신용카드사용액(원) : ");
    scanf("%d", &creditCard);

    printf("체크카드사용액(원) : ");
    scanf("%d", &checkCard);

    if(age >= 18) {
        workingHour = workingSecond / 3600;
        workingSecond %= 3600;
        
        workingMinute = workingSecond / 60;
        workingSecond %= 60;

        if(workingSecond) {
            workingMinute += 1;
            if(workingMinute == 60) {
                workingMinute = 0;
                workingHour += 1;
            }
        }
        
        if(age < 25) {
            if(workingHour - 7 >= 0) {
                overtimeHour = workingHour - 7;
                salary += (workingHour - overtimeHour) * (double) 12000;

                salary += overtimeHour * 6000;

                overtimeMinute = workingMinute;
                salary += overtimeMinute * (double) 100;
            } else {
                salary += workingHour * (double) 12000;
                salary += workingMinute * (double) 200;
            }
        }
        else if(age < 55) {
            if(workingHour - 9 >= 0) {
                overtimeHour = workingHour - 9;
                salary += (workingHour - overtimeHour) * (double) 12000;

                salary += overtimeHour * 6000;

                overtimeMinute = workingMinute;
                salary += overtimeMinute * (double) 100;
            } else {
                salary += workingHour * (double) 12000;
                salary += workingMinute * (double) 200;
            }
        }
        else if(age < 65) {
            if(workingHour - 5 >= 0) {
                overtimeHour = workingHour - 5;
                salary += (workingHour - overtimeHour) * (double) 12000;

                salary += overtimeHour * 6000;

                overtimeMinute = workingMinute;
                salary += overtimeMinute * (double) 100;
            } else {
                salary += workingHour * (double) 12000;
                salary += workingMinute * (double) 200;
            }
        }
        else {
            if(workingHour - 3 >= 0) {
                overtimeHour = workingHour - 3;
                salary += (workingHour - overtimeHour) * (double) 12000;

                salary += overtimeHour * 6000;

                overtimeMinute = workingMinute;
                salary += overtimeMinute * (double) 100;
            } else {
                salary += workingHour * (double) 12000;
                salary += workingMinute * (double) 200;
            }
        }
        
        duty = dutyCalcurator(salary);

        refund = refundCacurator(salary, dependentsNumber,creditCard, checkCard);

        afterSalary = salary - duty + refund;

        printf("%d번 사원 급여정보입니다.\n%d시간 %d분 근무자로 %d시간 %d분 초과근무한 기획실 직원입니다.\n세전 급여액은 %d원 세금 %d원 환급금 %d원으로 세후금액은 %d원입니다.",
        employeeNumber, workingHour, workingMinute, overtimeHour, overtimeMinute, 
        (int)(salary + 0.5), 
        (int)(duty + 0.5), 
        (int)(refund + 0.5),
        (int)(afterSalary + 0.5)
        );

    } else {
        printf("근무 할 수 없는 나이입니다.");
    }
        return 0;
}