//5. Write C program to calculate factorial of a number.

#include<stdio.h>

int main(){
	int i=1,n,fact;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	while(i<=n){
		fact *= i;
		i++;
		
	}
	printf("%d\n",fact);
		
	return 0;
}
