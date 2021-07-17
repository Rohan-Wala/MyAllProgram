#include<iostream>
using namespace std;

int main( )
{
  int arr[2] = {0,1};
  cout<<"First Element = "<<arr[0]<<"\n";
  //output of above line will be 0
  
  cout<<"First Element = "<<0[arr];
  //what will be the output of this line
  
  return 0;
}
/*
Now if you replace arr[0] with 0[arr], the output would be same.
Because compiler converts the array operation in pointers before accessing the 
array elements.

e.g. arr[0] would be *(arr + 0) and therefore 0[arr] would be *(0 + arr) 
and you know that both *(arr + 0) and *(0 + arr) are same.

*/
