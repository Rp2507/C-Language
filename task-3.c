//3. Write C program to find out max from 4 numbers using nested if.

#include<stdio.h>

int main(){
	
	int a,b,c,d;
	
	printf("Enter Number : ");
	scanf("%d",&a);
	
	printf("Enter Number : ");
	scanf("%d",&b);
	
	printf("Enter Number : ");
	scanf("%d",&c);
	
	printf("Enter Number : ");
	scanf("%d",&d);
	
	if(a>b){
		
		if(a>c){
			
			if(a>d){
				printf("A is Max");
			}
			else{
				printf("D is Max");
			}
		}
		else{
			
			if(c>d){
				printf("C is Max");
			}
			else{
			    printf("D is Max");	
			}
		}
	}
	else{
		if(b>c){
			
			if(c>d){
				printf("C is Max");
			}
			else{
				printf("D is Max");
			}
		}
		else{
			if(c>d){
				printf("C is Max");
			}
			else{
				printf("D is Max");
			}
		}
	}
	
	
	
	return 0;
}
