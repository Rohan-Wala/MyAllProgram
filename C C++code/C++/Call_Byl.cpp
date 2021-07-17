#include<iostream>
using namespace std;
int add(int &a,int b, int c){
a += 10;
  ++b;
  c--;

return a;
}

int   main(){

int a = 10;
int b = 0;
int c = 0;
cout<<add(a,b,c)<<"\t"<<b<<"\t"<<c;
return 0;
}

