/*
Author: Gabriel Ekalees
ADM : BCS-01-0562/2026
Date: 10/5/2026
Description: A program that uses a for loop to count down from 100 to 50.
*/

#include <stdio.h>

int main() {
    int i;

    for (i = 100; i >= 50; i--) {
        printf("%d\n", i);
    }

    return 0;
}