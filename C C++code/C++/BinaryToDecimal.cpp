#include<iostream>
using namespace std;
int main(){
	int binary = 1111;
	int last =0;
	int base =1;
	int decimal=0;
	while(binary){
		last=  binary % 10;
		binary /= 10;
		decimal += last*base;
		base *= 2; 
	}
	cout<<"decimal is "<< decimal;
}
