/*several stack can be stored in to single array. 
suppose A[] is an array of size MAX and N number of stack are to be stored in array.
we can divide avaliable memory A[0...MAX-1] into N segment each stack can be allocated 
one of these segment  
 */
 
 
#include<iostream>
#define max 20
using namespace std;
class multStack{
	int arr[max];
	const static int N = 4;
	int T[N],B[N];
	int top;
	
	/*
	for each stack T[i] and B[i] represent the indices of 
	topmost and bottementmost element of the stack i.
	Initial aalues olf T[i] and B[i] is calcualted as below
	*/
	
	
		
	/*
	the operation remain the same but they have additional parameter ,stack number
	*/
	public:
		multStack(){
			for(int i=0;i<N;i++)	
				T[i] = B[i] = (max/N)*i;
		}
		int empty(int stck_num);
		int full(int stack_num);
		void push(int stack_num,int value);
		void pop(int stack_num);
		int topmost(int stack_num);
		void print(int stack_num);
};

int multStack::full(int stack_num){
	int i = stack_num;
	if(T[i] == B[i+1])
		return 1;
	return 0;
}
int multStack::empty(int stack_num){
	int i = stack_num;
	if(T[i] == B[i])
		return 1;
	return 0;
}
void multStack::push(int stack_num,int value){
	int i = stack_num;
	if(full(i))
		cout<<"stack overflow\n";
	else {
		top = T[i];
		arr[top] = value;
		T[i] = T[i]+1;
		cout<<"the value "<<value<<" is pushed into the stack\n";	
		}
	
	
} 
void multStack::pop(int stack_num){
	int i = stack_num;
	if(empty(i))
		cout<<"stack underflow\n";
	else{
		T[i] = T[i]-1;
	}
}
int multStack::topmost(int stack_num){
	int i = stack_num;
	top = T[i]-1;
	return arr[top];
//	return T[i];
}
void multStack::print(int stack_num){
	int i = stack_num;
	if(empty(i))
		cout<<"stack is empty\n";
	else{
		cout<<"the values of "<<i+1<<" stack are ";
		for(int j = B[i]; j<T[i] ;j++)
			cout<<arr[j]<<" ";
		cout<<"\n";
	}
} 
int main(){
	
	multStack s;
	cout<<"\n"<<"enterning 1 & 2 values into 1ft stack\n";
	s.push(0,1);
	s.push(0,2);
	
	cout<<"\n"<<"enterning 5 & 6 values into 2nd stack\n";
	s.push(1,5);
	s.push(1,6);
	
	cout<<"\n"<<"enterning 9,10,11,12,13 values into 3rd stack\n";
	s.push(2,9);
	s.push(2,10);
	s.push(2,11);
	s.push(2,12);
	s.push(2,13);
	s.push(2,15); // checking overflow

	
	cout<<"\n"<<"enterning 13 & 14 values into 4th stack\n";
	s.push(3,13);
	s.push(3,14);
	
	cout<<"\n";
	
	s.print(0);
	s.print(1);
	s.print(2);
	s.print(3);
	
	cout<<"\n";
	
	cout<<"poping 2 vlaues from stack 1\n";
	s.pop(0);
	s.pop(0);
	s.pop(0);//checking underflow
	
	cout<<"\n";
	
	cout<<"value after pop\n";
	s.print(0);
return 0;
}
