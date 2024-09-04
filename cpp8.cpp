#include<iostream>
using namespace std;

int main(){
	//cout<<"This is tutorial 9";
	int age;
	
	cout<<"Tell me your age ";
	cin>>age;
	
	//selection control structure: if-else,if-else ladder
	/*if((age<18) && (age>0)){
		cout<<"You cannot come to my party"<<endl;
	}
	else if(age==18){
		cout<<"You are a kid and will get a kid pass to the party"<<endl;
	}
	else if(age<1){
		cout<<"You are not yet born";
	}
	else{
		cout<<"You cam come to the party"<<endl;
	}*/
	
	
	//selection control structures: switch case statement
	switch(age)
	{
	case 18:
		cout<<"You are 18"<<endl;;
		break;
	case 22:
		cout<<"You are 22"<<endl;
		break;
	case 2:
		cout<<"You are 2"<<endl;
		break;
	default:
	cout<<"No special Cases"<<endl;
	break;
	}
	cout<<"Done with switc case";
	return 0;
}
