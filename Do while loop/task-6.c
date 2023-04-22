//6. WAP to print even no. from N to 1 using do while loop.//

#include<stdio.h>

int main(){
	
	int i=1,n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	do{	
		if(i%2==0){
			printf("%d\n",i);
		}
		i++;
	}while(i<=n);
	
	return 0;
}
