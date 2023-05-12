//3.WAP to create infinite calculator using UDF, switch case and Loop.

#include<stdio.h>

void add(int a,int b){
	
	printf("Sum %d\n\n",a+b);
}
void sub(int a,int b){
	
	printf("Sub %d\n\n",a-b);
}
void multi(int a,int b){
	
	printf("multi %d\n\n",a*b);
}
void div(int a,int b){
	
	printf("div %d\n\n",a/b);
}
void mod(int a,int b){
	
	printf("mod %d\n\n",a%b);
}

int main(){
	
	int fn,sn;
	char sl;
	
	while(1){
		
			printf("Enter first number : ");
	        scanf("%d",&fn);
	
	        printf("Enter second number : ");
	        scanf("%d",&sn);
	        
	        printf("Make your selection : + , - , * , / , % \n");
	        
	        printf("\n Enter your selection : ");
	        scanf(" %c",&sl);
	        
	        switch(sl){
	        	
	        	case '+':
	        		add(fn,sn);
	        		break;
	        		
	        	case '-':
	        		sub(fn,sn);
	        		break;
					
				case '*':
	        		multi(fn,sn);
	        		break;
					
				case '/':
	        		div(fn,sn);
	        		break;
					
				case '%':
	        		mod(fn,sn);
	        		break;				
			}
	}
	
	return 0;
}
