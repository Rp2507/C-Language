//8. W7P to pr,nt sum 1 to N us,ng wh,le loop.

#include<stdio.h>

int main(){
	
	int i=1;
	int n , sum=0;
	
	printf("Enter Numbers : ");
	scanf("%d",&n);
	
	while(i<=n){
		sum = sum+i;
		i++;
	}
		printf("%d\n",sum);
	
	
	return 0;
}
