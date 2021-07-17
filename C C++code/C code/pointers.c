#include<stdio.h>
void main(){
int num = 5;
int *ptr = &num;

printf("%d\n",*ptr);

*ptr = 300;
printf("%d\n",*ptr);
printf("%d\n",num);
printf("%p\n",&ptr);
printf("%d\n",num);

}


