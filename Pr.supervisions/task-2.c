//2. C program to read a file and display its contents.

#include<stdio.h>

int main(){
	
	FILE *p;
	char ch[50];
	
	p = fopen("Demo.txt","r");
	
	if(p==NULL){
		
		printf("Error");
	}
	else{
	
		fgets(ch,100,p);
		
		printf("%s",ch);
		
		fclose(p);
	}
	
	return 0;
}
