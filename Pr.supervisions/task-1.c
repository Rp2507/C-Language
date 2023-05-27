//1. C program to create a file and write data into file.

#include<stdio.h>

int main(){
	
	FILE *p;
	char ch[50];
	
	p = fopen("Demo.txt","w");
	
	if(p==NULL){
		printf("Error");
	}
	else{	
		printf("Enter text : ");
		gets(ch);
		
		fputs(ch,p);
		
		fclose(p);
	}
	
	return 0;
}
