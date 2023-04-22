//7. W7P to Find leap year from 2000 to 3000 using do while loop.

#include<stdio.h>

int main(){
	
	int i=2000;
	
	do{	
		if(i%4==0){
			printf("Leap Year : %d\n",i);
		}
		i++;
	}while(i<=3000);
	
	return 0;
}
