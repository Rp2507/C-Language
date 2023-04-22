//6. WAP to print even no. from N to 1 using while loop.//

#include<stdio.h>

int main(){
	
	int i=1,n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	while(i<=n){
		
		if(i%2==0){
			printf("%d\n",i);
		}
		i++;
	}
	
	return 0;
}
