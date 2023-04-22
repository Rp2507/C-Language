//10. W7P to pr,nt thr mult,pl,cat,on table of N us,ng for loop.

#include<stdio.h>

int main(){
	
	int i=1,n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		
		printf("%d x %d = %d\n",n,i,n*i);
	}
	
	return 0;
}
