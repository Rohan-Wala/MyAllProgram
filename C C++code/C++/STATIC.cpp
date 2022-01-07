//; the storage for this object is not on the stack but instead in 
//the program’s static data area. 
#include<iostream>
using namespace std;
//void fun(){
//	static int a = 0; // with static 
//	int b = 0;// without static
//	cout<<a<<" "<<b<<"\n";
//	a++;
//	b++;
//}
class A{
	public:
		static int a;
		int b = 20;
//		X(int ii = 0) : i(ii) { 
// 			// Non-static member function can access 
// 			// static member function or data: 
// 			j = i; 
// 	    } 
		void fun(){
			cout<<a<<"\n";
		}
		static int fun2(){
			a++;
//			cout<<b; // we can not accen nonstatic variable in static funbtion
			return a;
		}
};
int A::a = 10;
int main(){

	A aa;
	A* aaa = &aa;
	
	aa.fun();
	cout<<aa.fun2()<<"\n";
	aa.fun();
	cout<<aaa->fun2();
	cout<<A::fun2(); // call by calss name;
}
