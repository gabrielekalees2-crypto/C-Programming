/*
Author: Gabriel Ekalees
Adm No: BCS-01-0562/2026
Date: 9.26.2026
*/

#include <stdio.h>

int main(){
	
	int attendance;
	float average_marks;
	
	printf("Enter your attendance.\t");
	scanf("%d",&attendance);
	
	printf("Enter your average_marks.\t");
	scanf("%f",&average_marks);
	
	if(attendance >= 75 && average_marks >= 40){
		printf("Eligible for final examination.\n");
	}
	else
	{
		printf("Not eligible for the final examination.\n");
	}
	
	return 0;
}