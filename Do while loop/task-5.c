//5. WAP to print odd no. from 1 to N using do while loop.

#include<stdio.h>

int main(){
	
	int i=1,n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	do{
		if(i%2!=0){
			printf("%d\n",i);
		}
		i++;
	}while(i<=n);
	
	return 0;
}
