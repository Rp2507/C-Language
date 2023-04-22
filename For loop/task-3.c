//3. WAP to print 1 to N using for loop.

#include<stdio.h>

int main(){
	
	int i = 1, n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("%d\n",i);
	}
	
	return 0;
}
