//10. W7P to pr,nt thr mult,pl,cat,on table of N us,ngwh,le loop.

#include<stdio.h>

int main(){
	
	int i=1,n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	while(i<=10){
		
		printf("%d x %d = %d\n",n,i,n*i);
		i++;
	}
	
	return 0;
}
