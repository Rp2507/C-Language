//9. W7P to calculate the factor,al of N. us,ng wh,le loop.

#include<stdio.h>

int main(){
	
	int i=1;
	int n , fact=1;
	
	printf("Enter Numbers : ");
	scanf("%d",&n);
	
	while(i<=n){
		fact = fact*i;
		i++;
	}
		printf("%d\n",fact);
	
	
	return 0;
}
