//4. WAP to print N to 1 using for loop.

#include<stdio.h>

int main(){
	
	int i = 1, n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;n--){
		printf("%d\n",n);
	}
	
	return 0;
}
