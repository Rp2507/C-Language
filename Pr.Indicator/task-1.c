//1. C program to swap two numbers using pointers using udf.

#include<stdio.h>

void swap(int *a,int *b){
	
	int c;
	
	printf("\nBefore Swap A : %d\n",*a);
	printf("Before Swap B : %d",*b);
	
	c = *b;
	*b = *a;
	*a = c;
	
	printf("\n\nAfter Swap A : %d\n",*a);
	printf("After Swap B : %d",*b);
	
}

int main(){
	
	int x,y;
	
	printf("Enter First Value : ");
	scanf("%d",&x);
	
	printf("Enter Second Value : ");
	scanf("%d",&y);
	
	swap(&x,&y);
	
	return 0;
}
