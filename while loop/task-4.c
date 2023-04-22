//4. WAP to print N to 1 using while loop.

#include<stdio.h>

int main(){
	
	int i = 1, n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	while(i<=n){
		
		printf("%d\n",n);
		n--;
	}
	
	return 0;
}
