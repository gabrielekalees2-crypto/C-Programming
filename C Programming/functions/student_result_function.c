/*
Author: Gabriel Ekalees
ADM : BCS-01-0562/2026


Date: 10/08/2026
*/


#include <stdio.h>

int Total(int Subject_1, int Subject_2, int Subject_3) {
    int Result = Subject_1 + Subject_2 + Subject_3;
    return Result;
}

int Average(int Subject_1, int Subject_2, int Subject_3) {
    int Result_2 = (Subject_1 + Subject_2 + Subject_3) / 3;
    return Result_2;
}

void DisplayResult(int Average) {
    if (Average >= 50) {
        printf("Passed.\n");
    }
    else {
        printf("Failed.\n");
    }
}

int main() {
    int Subject_1, Subject_2, Subject_3;
    int result, Result;

    printf("Enter Subject1: ");
    scanf("%d", &Subject_1);

    printf("Enter Subject2: ");
    scanf("%d", &Subject_2);

    printf("Enter Subject3: ");
    scanf("%d", &Subject_3);

    result = Total(Subject_1, Subject_2, Subject_3);
    Result = Average(Subject_1, Subject_2, Subject_3);

    printf("The calculated sum will be %d.\n", result);
    printf("The average will be %d.\n", Result);

    DisplayResult(Result);

    return 0;
}