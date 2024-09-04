#include<iostream>

using namespace std;

int main(){
	int a=4,b=5;
	
	cout<<"This is hello world program:"<<endl;
	//Arithmetic operators
	cout<<"the value of a + b is "<<a+b<<endl;
	cout<<"the value of a - b is "<<a-b<<endl;
	cout<<"the value of a * b is "<<a*b<<endl;
	cout<<"the value of a / b is "<<a/b<<endl;
	cout<<"the value of a++ is "<<a++<<endl;
	cout<<"the value of a-- is "<<a--<<endl;
	cout<<"the value of ++ a is "<<++a<<endl;
	cout<<"the value of -- a is "<<--a<<endl;
	cout<<endl;
	
	//Assignment operators-- used to assign values to variables
	//int a = 3,b = 9;
	//int char d = 'd';
	
	//comparison operators
	cout<<"The value of a == b is "<<(a==b)<<endl;
	cout<<"The value of a != b is "<<(a!=b)<<endl;
	cout<<"The value of a > b is "<<(a>b)<<endl;
	cout<<"The value of a < b is "<<(a<b)<<endl;
	cout<<"The value of a <= b is "<<(a<=b)<<endl;
	cout<<"The value of a >= b is "<<(a>=b)<<endl;
	
	//logical operators
	cout<<"Follwing are the logical operators in c++"<<endl;
	cout<<"The value of this logical and opoerator ((a==b) && (a<b)) logical opoerator is "<<((a==b) && (a<b))<<endl;
	cout<<"The value of this logical or opoerator ((a==b) || (a<b)) logical opoerator is "<<((a==b) || (a<b))<<endl;
	cout<<"The value of this logical not (!(a==b)) logical opoerator is "<<(!(a==b))<<endl;
	return 0;
}
