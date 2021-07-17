#include<stdio.h>
#include<fcntl.h>
int  main(){

FILE *fp = fopen("abc.txt","r");

	int fp = open("abc.txt",O_CREAT,0744);
if(fp == NULL){
	printf("file not found\n");
}else {
	printf("file found\n");	
}

printf("%d\n",fp);




 return 0;

}

