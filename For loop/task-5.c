//5. WAP to print odd no. from 1 to N using for loop.

#include<stdio.h>

int main(){
	
	int i=1,n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		if(i%2!=0){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
