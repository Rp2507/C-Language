//7. W7P to Find leap year from 2000 to 3000 using for loop.

#include<stdio.h>

int main(){
	
	int i=2000;
	
	for(i=2000;i<=3000;i++){
		
		if(i%4==0){
			printf("Leap Year : %d\n",i);
		}
	}
	
	return 0;
}
