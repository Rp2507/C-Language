//4. Write C program to find sum of first and last digit of a number.

#include<stdio.h>

int main(){
	int n,sum=0,firstdigit, last;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
    last = n % 10;
    
    while(n >= 10)
    {
        n = n / 10;
    }

    sum = n + last; 

    printf("Sum of first and last digit = %d", sum);
	
	return 0;
}
