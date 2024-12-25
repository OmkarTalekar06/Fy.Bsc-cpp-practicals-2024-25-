#include<iostream>
using namespace std;

//This is an simple calculator

int main(){
	int a,b,c;
	
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	
	//For Addition
	
	c = a + b;
	cout<<"The addition of two numbers is:"<<c<<endl;
	
	//For Substraction
	
	c = a - b;
	cout<<"The Substraction is:"<<c<<endl;
	
	//For Multiplication
	
	c = a * b;
	cout<<"The Multiplication is:"<<c<<endl;
	
	//For Division
	
	c = a / b;
	cout<<"The Division is:"<<c<<endl;
	
	return 0;
	
}
