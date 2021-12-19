#include<stdio.h>
#include<string.h>
#pragma pack(1) // to avoid memeory wastage in struct
struct player{
	int jerseyNO;
	float avg;
	char grade;
//	char name[20];
};

struct A {

        struct B {
        
                int x;
                float y;
        }obj1;

        struct C {
        
                int m;
                float n;
        }obj2;
};
void main(){
//	struct player P1 = {20, 50.25,'A'};

	
//	printf("%d\n", P1.jerseyNO);


	printf("%ld\n", sizeof(struct player));
//	x = wast i= int f= float d= double
//	I I I I C X X X 
//	F F F F X X X X
//	D D D D D D D D 
	//24
	
//	struct student{
//		char name[20];
//		int age;
//		char grade;
//	};
//	struct student obj1 = {"Raj",22,'A'};
//  struct student obj2 = {"Raj",22,'A'};
//
//        if(obj1.age == obj2.age && obj1.grade == obj2.grade && obj1.name == obj2.name)
//            printf("Same\n");									
//        else
//            printf("Different\n");
		// o/p will be different when compare name ,as it compare address of those tow,
		// and the address of both name id different 
		// but if we use pointer the o/p will be same 
	
	struct A a = {{10,10.5},{11,22.6}};
	printf("%d %.2f %d %.2f", a.obj1.x ,a.obj1.y,a.obj2.m,a.obj2.n );
}
