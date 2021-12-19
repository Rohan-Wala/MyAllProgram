#include<stdio.h>
#include<string.h>


int mystrcmp(char *str1, char *str2){

	int flag = 1;
	while(*str1 != '\0' || *str2 != '\0'){ 			

		if(*str1 == *str2)
			flag = 0;
		
		else{
			flag = 1;
			return (int)*str1 - (int)*str2; //difference between the acsii value 

		}

		str1++;
		str2++;

	}

	if(flag == 0)
	return 0;

}

int str_len(char *str){
	int len=0;
	while(*str != '\0'){
		len++;
		str++;
	}
	return len;
}

char* str_copy(char *src, char *dest){
	
	while(*src != '\0'){
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return dest;
		
}

void str_reverse(char *str){
	int l, i;
    char *beg_ptr, *end_ptr, temp;
    l = str_len(str);

    beg_ptr = str;
    end_ptr = str;
  
    
    for (i = 0; i < l - 1; i++)
        end_ptr++;
  
    
    for (i = 0; i < l / 2; i++) {
        temp = *end_ptr;
        *end_ptr = *beg_ptr;
        *beg_ptr = temp;
  	
        beg_ptr++;
        end_ptr--;
    }
}
void main(){ 

	char *str1 = "rohan";
	char *str2 = "rahul";
	char str3[20] ;
	char str4[] = "ABCD";
	int ret;
	// char* are read only memory*** 
	
//	ret = str_len(str1);
//	printf("the length of string is %d",ret);
	
	str_copy(str1,str3); // why without return 
	printf("string after copy %s",str3);
	
	str_reverse(str4);
	printf("string after reverse %s",str4);
	
	
//	ret = mystrcmp(str1, str2);
//	if(ret == 0)
//		printf("String is equal and %d\n",ret);
//	else
//		printf("String is not equal and %d\n",ret);
//	
	//printf("%ld\n",mystrcpy(str2));
	
}
