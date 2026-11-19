/*
 * Name: Gabriel Ekalees
 * ADM: BCS-01-0562/2026
 * Date: October 8, 2026
 */

#include <stdio.h>
#include <math.h>

int main() {
    double length, width, diagonal;

    printf("Enter length: ");
    scanf("%lf", &length);

    printf("Enter width: ");
    scanf("%lf", &width);


    diagonal = sqrt(pow(length, 2) + pow(width, 2));


    printf("\nLength: %.2f\n", length);
    printf("Width: %.2f\n", width);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}