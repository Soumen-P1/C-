#include<iostream>

using namespace std;

int glo = 6;
void sum(){
	int a;
	cout<< glo;
	}
	
int main(){
	int glo=9;
	glo=34;
	glo=25;
	//int a = 14;
	//int b = 15;
	int a=14, b=15;
	float pi = 3.14;
	char C = 'k';
	bool is_true = false ;
	sum();
	cout<<glo;
	cout<< is_true;
	cout<<". \nCoding cpp4.\nHere the value of a is "<<a<<". \nThe value of b is "<< b;
	cout<<". \nThe value of pi is: "<< pi;
	cout<<". \nThe value of c is: "<< C <<".";
	return 0;
}
