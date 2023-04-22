//5. Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition

#include<stdio.h>

int main () {
	
	int unit;
	int Total;
	
	printf("Enter Unit Reading: ");
	scanf("%d", &unit);
	
	if (unit<0) {
		printf("Enter valid Reading");
	}
	else {
		if (unit<=50) {
			Total = (unit * 0.50);
			Total = (Total + (Total*20/100));
			printf("Bill amount is %d",Total);		
		}
		
		else {
			if (unit<=150) {
				Total = (unit-50) * 0.75 + 25;
				Total = (Total + (Total*20/100));
				printf("Bill amount is %d",Total);
			}
		else {
			if (unit<=250) {
				Total = (unit-150) * 1.20 + 100;
				Total = (Total + (Total*20/100));
				printf("Bill amount is %d",Total);
			}
			else {
			if (unit>250) {
				Total = (unit-250) * 1.50 + 220;
				Total = (Total + (Total*20/100));
				printf("Bill amount is %d",Total);
			}
		}
		}
		
		}
	}
	
	return 0;
}
