//2. C program to input and print array elements using pointers.

#include<stdio.h>

int main(){
	
	int n,i;
	
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	
	int a[n],*b[n];
	
	printf("Enter elements :\n");
     for (i = 0; i < n; i++){
     scanf("%d", &a[i]);
       b[i] = &a[i];
    }
    
    printf("Your enter elements : \n");
	for(i=0;i<n;i++){
		printf("%d\n",*b[i]);
	}  
    
    
	return 0;
}
