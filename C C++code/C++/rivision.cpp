#include<iostream>	
using namespace std;

class Company {
        int empCnt = 20;
		static int x;
        public:
                Company() {

                        cout << "No args" << endl;
                        cout << empCnt << endl;
                        empCnt++;
                        cout << empCnt << endl;
                        Company(10);
                }

                Company(int x) {
						this->x = x;// this cant be used in static function
                        cout << "Parameterized" << endl;
                        cout << empCnt <<" "<< x<<endl;
                    }
                static void fun(){
                    	cout<<"ewew";
					}
};

class Company1{
	int x;
	string refName;
	public:
		Company1(int x,string refName)
		{
			this->x = x;
			this->refName = refName;
		}
	
		void fun(Company1& obj)
		{
	
			cout << this->x << " " << this->refName<< endl;
			cout << obj.x << " " << obj.refName << endl;
		}
		void fun(){
			static int i = 10; // it will get place in data section only, and get delete only when data section is poped
			 // 
		}
		static void fun2(){
			static int j = 20;
			//count<<k; // we can not access a  non static variable in static () 
			//as non static variable gets initialize when constructure gets call and static variable gets initialize in the begining only
		}
};

int Company:: x = 30;
int main(){
//	cout<<"hello world"<<endl; // cout,cin is a object
//	int a = 10;
//	int &b = a;// referance to a ,same variable woth different name;
//	cout<<a<< " "<<b<<endl; // 10 10
//	b = 20;
//	cout<<b<<" "<<a; // 20 20 as we chane the value of b ,value of a will also change
	
//	int f(12);
//	cout<<f;

	Company obj(10); // instance variable gets initialize in every constructor 
	//No args
	//20
	//21
	//Parameterized
	//20
//	Company *obj1 = new Company(); // pointer object  
//	delete(obj1); // to clear the memory occupied by obj in heap to avoid memory wastage
	Company::fun(); // calling static function
	
	Company1 obj1(10,"Rahul"); //	20 Ashish
	Company1 obj2(20,"Ashish");//	10 Rahul
	obj2.fun(obj1);

	
	
	
	
	return 0;
}
