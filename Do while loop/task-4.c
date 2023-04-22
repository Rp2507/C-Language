//4. WAP to print N to 1 using do while loop.

#include<stdio.h>

int main(){
	
	int i = 1, n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	do{
        printf("%d\n",n);
		n--;
	}while(i<=n);
	
	return 0;
}
