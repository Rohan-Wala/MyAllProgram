#include<iostream>
using namespace std;
  class Parent{
    public:
    int a = 100;
    Parent(int a){
        this->a = a;
        cout<<"\n parent classs";
    }
    virtual void display(){
        cout<<a;
    }
};
class Child:public Parent{
    public:
    int b;
    Child(int b,int a):Parent(a){
        this->b = b;
        cout<<"\n child class\n";
    }
    void display(){
        cout<<a<<"\t"<<b;
    }
};
int main(){
    
    Parent *obj = new Child(10,20);
    obj->display();
    return 0;
}