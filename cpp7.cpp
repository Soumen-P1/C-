#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	/*int a = 34;
	cout<<"the value of a was "<<a<<endl;
	a = 24;
	cout<<"the value of a is "<<a;*/
	//constants in c++
	//const int a = 4;
	//cout<<"the value of a was "<<a<<endl;
	//a = 24;// you will get an error because a is a constant
	//cout<<"the value of a is "<<a;
	
	//manipulators in c++
	/*int a = 3,b = 78,c = 1288;
	cout<<"the value of a is "<<setw(4)<<a<<endl;
	cout<<"the value of b is "<<setw(4)<<b<<endl;
	cout<<"the value of c is "<<setw(4)<<c<<endl;
	
	cout<<"the value of a without setw is "<<a<<endl;
	cout<<"the value of b without setw is "<<b<<endl;
	cout<<"the value of c without setw is "<<c<<endl;*/
	
	
	//Operator Precedence
	int a = 3,b = 4;
	int c = ((((a*5)+b)-45)+87);
	cout<<c;
	return 0;
}
