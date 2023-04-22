//10. W7P to pr,nt thr mult,pl,cat,on table of N us,ng do wh,le loop.

#include<stdio.h>

int main(){
	
	int i=1,n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	do{
		
		printf("%d x %d = %d\n",n,i,n*i);
		i++;
	}while(i<=10);
	
	return 0;
}
