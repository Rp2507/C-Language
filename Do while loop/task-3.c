//3. WAP to print 1 to N using do while loop.

#include<stdio.h>

int main(){
	
	int i = 1, n;
	
	printf("Enter Value : ");
	scanf("%d",&n);

	do{
		printf("%d\n",i);
		i++;
	}while(i<=n);
	
	return 0;
}
