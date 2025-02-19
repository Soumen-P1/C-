#include<iostream>
using namespace std;

int main(){
	//Pointer is a data type which holds the address of other data types
	
	int a=3;
	int * b = &a;
	//&----> {address of} operator
	cout<<"The address of a is "<<&a<<endl;
	cout<<"The address of a is "<<b<<endl;
	
	
	//*----> (value at)dereference operator
	cout<<"The vaue at address of a is "<<*b<<endl;
	
	//Pointer to Pointer
	int** c = &b;
	cout<<"The address of b is "<<&b<<endl;
	cout<<"The value at address of c is "<<*c<<endl;
	cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
	
	return 0;
}
