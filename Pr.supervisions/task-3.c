//3. C program to append data into a file.

#include<stdio.h>

int main(){
	
	FILE *p;
	char ch[50];
	
	p = fopen("Demo.txt","a");
	
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
