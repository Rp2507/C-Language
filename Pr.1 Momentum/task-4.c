//4. Write C program use switch statement. Display Monday to Sunday.

#include<stdio.h>

int main(){
	
	char day;
	
	printf("Enter Character : ");
	scanf("%c", &day);
	
	switch(day){
		
		default:
			printf("invalid character");
			break;
			
		case 'M':
		    printf("Monday");
			break;
			
		case 'T':
		    printf("Tuesday");
			break;
			
		case 'W':
		    printf("Wednesday");
			break;
			
		case 't':
		    printf("Thursday");
			break;
			
		case 'F':
		    printf("Friday");
			break;
			
		case 'S':
		    printf("Saturday");
			break;
			
		case 's':
		    printf("Sunday");
			break;							
	}
	
	
	return 0;
}
