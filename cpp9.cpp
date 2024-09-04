#include<iostream>

using namespace std;

int main(){
	//Loops in C++
	//there are three types of loops in c++
	//1. For loop
	//2. While loop
	//3. do-While loop
	/*int i = 1;
	cout<<i<<endl;
	i++;*/
	
	
	//syntax for for loop
	//for(initialization; condition; updation)
	/*{
		loop body(c++ code);
	}*/
	/*for(int i = 0; i <= 40; i++)
	{
		cout<<i<<endl;
		
	}*/
	
	//While loop in c++
	//syntax
	/*while(condition)
		{
			c++ statements
		}*/
	//printing 1 to 40 using while loop
	//int i=1;
	/*while(i<=40){
		cout<<i<<endl;
		i++;
	}	*/
	
	
	//do while loop in c++
	//syntax 
	/*do
	{
	     c++ statements
    }while(condition);*/
    
    int i=1;
    do{
    	cout<<i<<endl;
    	i++;
	}while(i<=40);
	return 0;
}
