//1. Write C program to print all alphabets from a to z. using do while loop

#include <stdio.h>

int main()
{
    char ch = 'a';

    printf("Alphabets from a to z : \n");
    
    do{
      printf("%c\n", ch);
        ch++;
	} while(ch<='z');
    
    return 0;
}
