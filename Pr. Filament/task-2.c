//2. Write C program to check whether a string is palindrome or not.

#include<stdio.h>
#include<string.h>

int main(){
	
	char s1[100],s2[100];
	
	printf("Enter Text : ");
	gets(s1);
	
	strcpy(s2,s1);
	strrev(s2);
	
	int c;
	
	c = strcmp(s1,s2);
	if(c==0){
		printf("string is palindrome");
	}
	else{
		printf("string is not palidrome");
	}
		
	return 0;
}


