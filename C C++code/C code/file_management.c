#include<stdio.h>
void main(){
char buff[30],buff2[30];

FILE *fp = fopen("healthcare.txt","r");
int num = read(fp->_file,buff,18);
buff[num] = '\0';
printf("%s\n",buff);

close(fp->_file);

int f = read(fp->_file,buff2,18);
buff2[num] = '\0';
printf("%s\n",buff2);

}


