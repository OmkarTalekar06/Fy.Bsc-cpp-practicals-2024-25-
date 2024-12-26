#include<iostream>
using namespace std;

//Programme to find the greatest of three numbers

int main(){
	double num1,num2,num3;
	
	cout<<"Enter three numbers: ";
	cin>>num1>>num2>>num3;
	
	if(num1 > num2 && num1 > num3){
		cout<<"The greatest number is: "<<num1<<endl;
	}
	else if(num2 > num1 && num2 > num3){
		cout<<"The greatest number is: "<<num2<<endl;
	}
	else{
		cout<<"The greatest number is: "<<num3<<endl;
	}
	
	return 0;
}
