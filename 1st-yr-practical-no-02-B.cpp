#include<iostream>
using namespace std;

//sum of even and odd natural numbers

int main(){
	
	int num,max,even,odd;
	
	cout<<"Enter a number: ";
	cin>>max;
	
	for(num=1;num<=max;num++){
		if(num % 2 == 0){
			even = even + num;
		}
		else{
			odd = odd +num;
		}
	}
	cout<<"The Sum of Even number is: "<<even<<endl;
	cout<<"The Sum of odd number is: "<<odd<<endl;
	
	return 0;
}
