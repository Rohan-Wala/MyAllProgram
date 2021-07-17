#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
FILE *fp;
char s[80];
fp = fopen("abc.txt","w");
if(fp == NULL){
	puts("can't open file");
	exit(1);
}
	printf("enter some line");
	while(strlen(gets(s)) == 0){
		fputs(s,fp);
		fputs("\n",fp);
	}
	fclose(fp);
	return 0;

}

