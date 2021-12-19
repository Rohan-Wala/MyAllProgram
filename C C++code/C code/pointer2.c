#include<stdio.h>
int  main()
{
	
	int number = 50;
	int *p = &number;
	printf("Address of p variable is %x \n",p); 
	// p contains the address of the number therefore printing p gives the address of number.     
	printf("Value of p variable is %d \n",*p); 
	// As we know that * is used to dereference a pointer therefore if we print *p, we will get the value stored at the address contained by p.    
	
	//pointer to array
	int arr[10];  
	int (*pa)[10]= &arr; 
	
	//pointer to structure
	struct st 
	{  
    	int i;  
    	float f;  
	}ref;  
	struct st *ps = &ref;  

	//pointer to pointer
	int n=10;
	int *p1;
	int **p2;
	
	p1 = &n;
	p2 = &p1;
	printf("address of a: %x\n",p1); // Address of n will be printed   
    printf("address of p: %x\n",p2); // Address of p1 will be printed  
    printf("value stored at p: %d\n",*p1); 
	// value stoted at the address contained by p1 i.e. 10 will be printed  
    printf("value stored at pp: %d\n",**p2); 
	// value stored at the address contained by the pointer stoyred at p2 
	return 0;  
}



//#include <stdio.h>
//
//int sumAll = 0;
//
//void sum(int (*p)[5]) {
//
//        for(int i=0;i<5;i++) {
//
//                sumAll = sumAll + p[0][i];
//        }
//}
//
//void main() {
//
//        int arr[] = {10,20,30,40,50};
//
//        //sum(arr);
//        sum(&arr);
//
//        printf("%d\n",sumAll);
//}


//void sum(int (*ptr)[2][3]) {
//
//        for(int i=0;i<2;i++) {
//
//                for(int j=0;j<3;j++) {
//
//                        sumAll = sumAll + *(*(*(ptr+0)+i)+j);
//                }
//        }
//}

// pointer fuction
//void main() {
//
//        void (*fptr)(int,int)= fun;
//        fptr(10,20);
//}

//array of func pointer
// void (*fptr[3])(int,int) = {add,sub,mul}; 
// same data type and same paramenter list 
