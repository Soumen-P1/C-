#include<iostream>

using namespace std;

int glo = 6;
void sum(){
	int a;
	cout<<glo;
}


int main(){
	int glo = 9;
	glo = 20;
	int a = 2,b = 3;
	float c = 5.55;
	char d = 'd';
	bool is_true = true;
	cout<<glo;
	sum();
	cout<<is_true;
	cout<<a<<b<<c<<d;
	return 0;
}
