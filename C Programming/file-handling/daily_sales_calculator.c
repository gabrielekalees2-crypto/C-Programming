
/*
Author: Gabriel Ekalees
ADM : BCS-01-0562/2026
Date: 04/11/2026
*/

#include <stdio.h>

int main() {
    FILE *file;
    float amount;
    float total_sales = 0.0;
    int transaction_count = 0;

    file = fopen("sales.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open sales.txt\n");
        return 1;
    }

    printf("=== DAILY SALES REPORT ===\n\n");

    while (fscanf(file, "%f", &amount) == 1) {
        transaction_count++;
        total_sales += amount;

        printf("Transaction %d: Ksh %.2f\n",
               transaction_count, amount);
    }

    fclose(file);

    printf("\n------------------------------\n");
    printf("Total Transactions: %d\n", transaction_count);
    printf("Total Sales: Ksh %.2f\n", total_sales);

    return 0;
}