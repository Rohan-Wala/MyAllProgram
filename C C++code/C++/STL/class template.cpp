#include<iostream>
using namespace std;


template < class T>
class arithmatic{
	public:
		T a,b;
		arithmatic(T x, T y){
			a =x ;
			b = y;
		}
		void add()
		{
			cout<<"the addition is "<< a+b <<"\n ";
		}
		void sub()
		{
			cout<<"the subtraction is "<< a-b <<"\n ";
		}
};
int main(){
	cout<<"int datatype"<<"\n";
	arithmatic<int> a1(5,6);
	a1.add();
	a1.sub();
	
	cout<<"float datatype"<<"\n";
	arithmatic<float> a2(5.5,6.6);
	a2.add();
	a2.sub();
	return 0;
}
