//1.WAP to find cube of given number using UDF.

#include <stdio.h>  

int cube(){
	
		int c;
		
		printf("Enter number :");
		scanf("%d",&c);
		
		return c*c*c;
		
}

int main(){
	
	printf("%d",cube());
	
	return 0;
}

