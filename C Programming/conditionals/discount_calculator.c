/*
Author: Gabriel Ekalees
ADM : BCS-01-0562/2026

*/

#include<stdio.h>

int main(){
	
	float amount;
	float discount;
	float amount_to_pay;
	
	printf("Enter the amount.\n");
	scanf("%f",&amount);
	
	if(amount >= 10000){
		discount = 0.1 * amount;
	    amount_to_pay = amount - discount;
    }
    else if(amount >=5000){
		discount = 0.05 * amount;
	    amount_to_pay = amount - discount;
	}
	else{
		amount_to_pay = amount;
		printf("No discount");
	}
	
	printf("Discount = %.2f.\n",discount);
	printf("Amount to Pay  = %.2f.\n",amount_to_pay);
	
	return 0;
}