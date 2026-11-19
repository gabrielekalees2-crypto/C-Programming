/*
  Author: Gabriel Ekalees
  ADM : BCS-01-0562/2026
  Date: October 6, 2026
 */

#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password! Try again.\n\n");
        }
    } while (password != 1234);

    printf("\nAccess Granted\n");

    return 0;
}