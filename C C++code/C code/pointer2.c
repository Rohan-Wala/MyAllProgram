#include<stdio.h>
void main(){
	
	int num = 5;
	int *ptr = &num;
	int *ptr2 = NULL;
	
	printf("%d\n",*ptr);
	
	ptr2 = ptr;
	printf("%d\n",*ptr2);
	
	
	
	
}
